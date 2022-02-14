
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int ib_portid_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int *,int *,int ,int,int ,int ) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_4(ib_portid_t * VAR_5, uint8_t * VAR_6, int VAR_7,
    int VAR_8)
{
 uint8_t VAR_9[VAR_3];
 uint8_t *VAR_10;
 int VAR_11;

 if (VAR_8) {
  if (!FUNC_3(VAR_9, VAR_5, VAR_0, 0, 0, VAR_4))
   FUNC_1("smp query port 0 portinfo failed");
  VAR_10 = VAR_9;
 } else
  VAR_10 = VAR_6;

 if (!FUNC_3(VAR_6, VAR_5, VAR_0, VAR_7, 0, VAR_4))
  FUNC_1("smp query portinfo failed");
 VAR_11 = FUNC_2(VAR_10, 0, VAR_1);
 return (VAR_11 & FUNC_0(VAR_2));
}
