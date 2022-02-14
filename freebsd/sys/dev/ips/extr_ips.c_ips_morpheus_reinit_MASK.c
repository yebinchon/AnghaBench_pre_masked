
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int u_int32_t ;
struct TYPE_6__ {int dev; } ;
typedef TYPE_1__ ips_softc_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int ,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int ,char*) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int ) ;
 int FUNC_5 (TYPE_1__*,int ,int) ;

int FUNC_6(ips_softc_t *VAR_8, int VAR_9)
{
        u_int32_t VAR_10;
 int VAR_11;

 VAR_10 = FUNC_4(VAR_8, VAR_5);
 if(!VAR_9 && (FUNC_4(VAR_8, VAR_6) >= VAR_0) &&
     (FUNC_4(VAR_8, VAR_7) != 0xdeadbeef) && !VAR_10){
  FUNC_5(VAR_8, VAR_4, 0);
  return 0;
 }
 FUNC_5(VAR_8, VAR_4, 0xff);
 FUNC_4(VAR_8, VAR_4);

 FUNC_2(VAR_8->dev, "resetting adapter, this may take up to 5 minutes\n");
 FUNC_5(VAR_8, VAR_3, 0x80000000);
 FUNC_0(5000000);
 FUNC_4(VAR_8, VAR_4);

 VAR_10 = FUNC_4(VAR_8, VAR_5);
 for(VAR_11 = 0; VAR_11 < 45 && !(VAR_10 & VAR_1); VAR_11++){
  FUNC_0(1000000);
  FUNC_1(2, VAR_8->dev, "post1: %d\n", VAR_11);
  VAR_10 = FUNC_4(VAR_8, VAR_5);
 }
 if(VAR_10 & VAR_1)
  FUNC_5(VAR_8, VAR_5, VAR_1);

        if( VAR_11 == 45 || FUNC_4(VAR_8, VAR_6) < VAR_0){
                FUNC_2(VAR_8->dev,"Adapter error during initialization.\n");
  return 1;
        }
 for(VAR_11 = 0; VAR_11 < 240 && !(VAR_10 & VAR_2); VAR_11++){
  FUNC_0(1000000);
  FUNC_1(2, VAR_8->dev, "post2: %d\n", VAR_11);
  VAR_10 = FUNC_4(VAR_8, VAR_5);
 }
 if(VAR_10 & VAR_2)
  FUNC_5(VAR_8, VAR_5, VAR_2);

 if(VAR_11 == 240 || !FUNC_4(VAR_8, VAR_7)){
  FUNC_2(VAR_8->dev, "adapter failed config check\n");
  return 1;
        }
 FUNC_5(VAR_8, VAR_4, 0);
 if(VAR_9 && FUNC_3(VAR_8)){
  FUNC_2(VAR_8->dev, "adapter clear failed\n");
  return 1;
 }
 return 0;
}
