
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int16_t ;
struct ac97_info {int * dev; int lock; } ;
typedef int codec ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ,char*,int,struct ac97_info*,int,int ,char*,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct ac97_info*,int ) ;
 int FUNC_3 (struct ac97_info*,int ,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_8(struct ac97_info *VAR_5)
{
 u_int16_t VAR_6, VAR_7;

 if (VAR_5 == ((void*)0) || VAR_5->dev == ((void*)0))
  return;
 FUNC_6(VAR_5->lock);
 VAR_6 = FUNC_2(VAR_5, VAR_0);
 FUNC_3(VAR_5, VAR_0, VAR_6 ^ 0x8000);
 VAR_7 = FUNC_2(VAR_5, VAR_0);
 FUNC_3(VAR_5, VAR_0, VAR_6);
 FUNC_7(VAR_5->lock);
 if ((VAR_7 & 0x8000) == (VAR_6 & 0x8000))
  return;
 FUNC_0(FUNC_4(VAR_5->dev),
     FUNC_1(FUNC_5(VAR_5->dev)),
            VAR_3, "eapd", VAR_2 | VAR_1,
     VAR_5, sizeof(VAR_5), VAR_4,
     "I", "AC97 External Amplifier");
}
