
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct disk {char* d_name; char* d_unit; int d_flags; int d_ident; int d_init_level; int * d_geom; int d_sectorsize; int * d_devstat; int * d_strategy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,char*) ;
 int VAR_6 ;
 int VAR_7 ;
 int * FUNC_1 (scalar_t__*,char*,int ,int ,int ,int ) ;
 int VAR_8 ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,struct disk*,int ,struct disk*,int *) ;
 int FUNC_4 (char*,char*,char*,...) ;
 int FUNC_5 (scalar_t__*) ;

void
FUNC_6(struct disk *VAR_9, int VAR_10)
{

 if (VAR_10 != VAR_5) {
  FUNC_4("WARNING: Attempt to add disk %s%d %s",
      VAR_9->d_name, VAR_9->d_unit,
      " using incompatible ABI version of disk(9)\n");
  FUNC_4("WARNING: Ignoring disk %s%d\n",
      VAR_9->d_name, VAR_9->d_unit);
  return;
 }
 if (VAR_9->d_flags & VAR_3) {
  FUNC_4("WARNING: Attempt to add non-MPSAFE disk %s%d\n",
      VAR_9->d_name, VAR_9->d_unit);
  FUNC_4("WARNING: Ignoring disk %s%d\n",
      VAR_9->d_name, VAR_9->d_unit);
  return;
 }
 FUNC_0(VAR_9->d_strategy != ((void*)0), ("disk_create need d_strategy"));
 FUNC_0(VAR_9->d_name != ((void*)0), ("disk_create need d_name"));
 FUNC_0(*VAR_9->d_name != 0, ("disk_create need d_name"));
 FUNC_0(FUNC_5(VAR_9->d_name) < VAR_7 - 4, ("disk name too long"));
 if (VAR_9->d_devstat == ((void*)0))
  VAR_9->d_devstat = FUNC_1(VAR_9->d_name, VAR_9->d_unit,
      VAR_9->d_sectorsize, VAR_0,
      VAR_2, VAR_1);
 VAR_9->d_geom = ((void*)0);

 VAR_9->d_init_level = VAR_4;

 FUNC_2(VAR_9->d_ident, sizeof(VAR_9->d_ident));
 FUNC_3(VAR_8, VAR_9, VAR_6, VAR_9, ((void*)0));
}
