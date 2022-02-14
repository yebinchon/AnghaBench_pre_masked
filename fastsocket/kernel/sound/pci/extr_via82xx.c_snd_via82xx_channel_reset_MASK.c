
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct viadev {scalar_t__ hwptr_done; scalar_t__ lastpos; } ;
struct via82xx {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct viadev*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(struct via82xx *VAR_6, struct viadev *VAR_7)
{
 FUNC_2(VAR_3 | VAR_5 | VAR_4,
      FUNC_0(VAR_7, VAR_0));
 FUNC_1(FUNC_0(VAR_7, VAR_0));
 FUNC_3(50);

 FUNC_2(0x00, FUNC_0(VAR_7, VAR_0));

 FUNC_2(0x03, FUNC_0(VAR_7, VAR_1));
 FUNC_2(0x00, FUNC_0(VAR_7, VAR_2));

 VAR_7->lastpos = 0;
 VAR_7->hwptr_done = 0;
}
