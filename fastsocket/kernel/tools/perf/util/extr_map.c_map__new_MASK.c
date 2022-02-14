
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef int u32 ;
struct map {int type; int unmap_ip; int map_ip; } ;
struct list_head {int dummy; } ;
struct dso {int dummy; } ;
typedef int newfilename ;
typedef enum map_type { ____Placeholder_map_type } map_type ;


 int VAR_0 ;
 struct dso* FUNC_0 (struct list_head*,char*) ;
 int FUNC_1 (struct dso*,int ) ;
 int FUNC_2 (struct map*) ;
 int VAR_1 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*) ;
 struct map* FUNC_6 (int) ;
 int FUNC_7 (struct map*,int,scalar_t__,scalar_t__,scalar_t__,struct dso*) ;
 int FUNC_8 (char*,int,char*,int) ;
 struct dso* FUNC_9 (struct list_head*) ;

struct map *FUNC_10(struct list_head *VAR_2, u64 VAR_3, u64 VAR_4,
       u64 VAR_5, u32 VAR_6, char *VAR_7,
       enum map_type VAR_8)
{
 struct map *VAR_9 = FUNC_6(sizeof(*VAR_9));

 if (VAR_9 != ((void*)0)) {
  char VAR_10[VAR_0];
  struct dso *VAR_11;
  int VAR_12, VAR_13, VAR_14;

  VAR_12 = FUNC_3(VAR_7);
  VAR_14 = FUNC_5(VAR_7);
  VAR_13 = FUNC_4(VAR_7);

  if (VAR_12) {
   FUNC_8(VAR_10, sizeof(VAR_10), "/tmp/perf-%d.map", VAR_6);
   VAR_7 = VAR_10;
  }

  if (VAR_14) {
   VAR_5 = 0;
   VAR_11 = FUNC_9(VAR_2);
  } else
   VAR_11 = FUNC_0(VAR_2, VAR_7);

  if (VAR_11 == ((void*)0))
   goto out_delete;

  FUNC_7(VAR_9, VAR_8, VAR_3, VAR_3 + VAR_4, VAR_5, VAR_11);

  if (VAR_12 || VAR_13) {
   VAR_9->map_ip = VAR_9->unmap_ip = VAR_1;






   if (VAR_13)
    FUNC_1(VAR_11, VAR_9->type);
  }
 }
 return VAR_9;
out_delete:
 FUNC_2(VAR_9);
 return ((void*)0);
}
