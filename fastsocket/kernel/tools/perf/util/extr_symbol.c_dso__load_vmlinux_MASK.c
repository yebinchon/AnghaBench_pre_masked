
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int symfs_vmlinux ;
typedef int symbol_filter_t ;
struct symsrc {int dummy; } ;
struct map {int type; } ;
struct dso {scalar_t__ kernel; } ;
typedef enum dso_binary_type { ____Placeholder_dso_binary_type } dso_binary_type ;
struct TYPE_2__ {char* symfs; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct dso*,struct map*,struct symsrc*,struct symsrc*,int ,int ) ;
 int FUNC_1 (struct dso*,int ) ;
 int FUNC_2 (struct dso*,char*) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (char*,int,char*,char*,char const*) ;
 TYPE_1__ VAR_4 ;
 int FUNC_5 (struct symsrc*) ;
 scalar_t__ FUNC_6 (struct symsrc*,struct dso*,char*,int) ;

int FUNC_7(struct dso *VAR_5, struct map *VAR_6,
        const char *VAR_7, symbol_filter_t VAR_8)
{
 int VAR_9 = -1;
 struct symsrc VAR_10;
 char VAR_11[VAR_3];
 enum dso_binary_type VAR_12;

 FUNC_4(VAR_11, sizeof(VAR_11), "%s%s",
   VAR_4.symfs, VAR_7);

 if (VAR_5->kernel == VAR_2)
  VAR_12 = VAR_0;
 else
  VAR_12 = VAR_1;

 if (FUNC_6(&VAR_10, VAR_5, VAR_11, VAR_12))
  return -1;

 VAR_9 = FUNC_0(VAR_5, VAR_6, &VAR_10, &VAR_10, VAR_8, 0);
 FUNC_5(&VAR_10);

 if (VAR_9 > 0) {
  FUNC_2(VAR_5, (char *)VAR_7);
  FUNC_1(VAR_5, VAR_6->type);
  FUNC_3("Using %s for symbols\n", VAR_11);
 }

 return VAR_9;
}
