
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct mixart_mgr {int dummy; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_0 (struct mixart_mgr*,scalar_t__) ;
 int FUNC_1 () ;
 unsigned long VAR_2 ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct mixart_mgr *VAR_3,
            u32 VAR_4, int VAR_5,
            u32 VAR_6, unsigned long VAR_7)
{
 unsigned long VAR_8 = VAR_2 + (VAR_7 * VAR_1 / 100);
 u32 VAR_9;

 do {


  FUNC_1();

  VAR_9 = FUNC_2( FUNC_0( VAR_3, VAR_4 ));
  if(VAR_5) {
   if(VAR_9 == VAR_6) return 0;
  }
  else {
   if(VAR_9 != VAR_6) return 0;
  }
 } while ( FUNC_3(VAR_8, VAR_2) );

 return -VAR_0;
}
