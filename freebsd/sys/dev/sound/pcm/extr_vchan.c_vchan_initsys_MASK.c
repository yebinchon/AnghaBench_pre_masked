
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snddev_info {int rec_sysctl_tree; int rec_sysctl_ctx; int play_sysctl_tree; int play_sysctl_ctx; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,int ,int ,char*,int,int ,int ,int ,char*,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int ) ;
 int VAR_6 ;
 struct snddev_info* FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

void
FUNC_5(device_t VAR_11)
{
 struct snddev_info *VAR_12;
 int VAR_13;

 VAR_13 = FUNC_4(VAR_11);
 VAR_12 = FUNC_3(VAR_11);


 FUNC_0(&VAR_12->play_sysctl_ctx,
     FUNC_1(VAR_12->play_sysctl_tree),
     VAR_3, "vchans", VAR_1 | VAR_0,
     FUNC_2(VAR_13, VAR_4), VAR_6,
     VAR_10, "I", "total allocated virtual channel");
 FUNC_0(&VAR_12->play_sysctl_ctx,
     FUNC_1(VAR_12->play_sysctl_tree),
     VAR_3, "vchanmode", VAR_2 | VAR_0,
     FUNC_2(VAR_13, VAR_4), VAR_6,
     VAR_8, "A",
     "vchan format/rate selection: 0=fixed, 1=passthrough, 2=adaptive");
 FUNC_0(&VAR_12->play_sysctl_ctx,
     FUNC_1(VAR_12->play_sysctl_tree),
     VAR_3, "vchanrate", VAR_1 | VAR_0,
     FUNC_2(VAR_13, VAR_4), VAR_6,
     VAR_9, "I", "virtual channel mixing speed/rate");
 FUNC_0(&VAR_12->play_sysctl_ctx,
     FUNC_1(VAR_12->play_sysctl_tree),
     VAR_3, "vchanformat", VAR_2 | VAR_0,
     FUNC_2(VAR_13, VAR_4), VAR_6,
     VAR_7, "A", "virtual channel mixing format");

 FUNC_0(&VAR_12->rec_sysctl_ctx,
     FUNC_1(VAR_12->rec_sysctl_tree),
     VAR_3, "vchans", VAR_1 | VAR_0,
     FUNC_2(VAR_13, VAR_5), VAR_6,
     VAR_10, "I", "total allocated virtual channel");
 FUNC_0(&VAR_12->rec_sysctl_ctx,
     FUNC_1(VAR_12->rec_sysctl_tree),
     VAR_3, "vchanmode", VAR_2 | VAR_0,
     FUNC_2(VAR_13, VAR_5), VAR_6,
     VAR_8, "A",
     "vchan format/rate selection: 0=fixed, 1=passthrough, 2=adaptive");
 FUNC_0(&VAR_12->rec_sysctl_ctx,
     FUNC_1(VAR_12->rec_sysctl_tree),
     VAR_3, "vchanrate", VAR_1 | VAR_0,
     FUNC_2(VAR_13, VAR_5), VAR_6,
     VAR_9, "I", "virtual channel mixing speed/rate");
 FUNC_0(&VAR_12->rec_sysctl_ctx,
     FUNC_1(VAR_12->rec_sysctl_tree),
     VAR_3, "vchanformat", VAR_2 | VAR_0,
     FUNC_2(VAR_13, VAR_5), VAR_6,
     VAR_7, "A", "virtual channel mixing format");
}
