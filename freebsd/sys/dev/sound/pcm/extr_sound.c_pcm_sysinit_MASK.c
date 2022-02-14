
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snddev_info {int flags; int bufsz; } ;
typedef int device_t ;
typedef int d ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int ,int ,char*,int,struct snddev_info*,int,int ,char*,char*) ;
 int FUNC_1 (int ,int ,int ,char*,int ,int *,int ,char*) ;
 int FUNC_2 (int ) ;
 struct snddev_info* FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_7 (int ) ;

__attribute__((used)) static void
FUNC_8(device_t VAR_11)
{
   struct snddev_info *VAR_12 = FUNC_3(VAR_11);



 FUNC_1(FUNC_4(VAR_11),
     FUNC_2(FUNC_5(VAR_11)),
            VAR_4, "buffersize", VAR_0, &VAR_12->bufsz, 0, "allocated buffer size");
 FUNC_0(FUNC_4(VAR_11),
     FUNC_2(FUNC_5(VAR_11)), VAR_4,
     "bitperfect", VAR_2 | VAR_1, VAR_12, sizeof(VAR_12),
     VAR_7, "I",
     "bit-perfect playback/recording (0=disable, 1=enable)");
 if (VAR_12->flags & VAR_5)
  FUNC_7(VAR_11);
 if (VAR_12->flags & VAR_6)
  FUNC_6(VAR_11);
}
