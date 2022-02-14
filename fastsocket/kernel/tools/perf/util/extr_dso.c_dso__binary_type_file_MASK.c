
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dso {char* long_name; int build_id; int has_build_id; int long_name_len; } ;
typedef enum dso_binary_type { ____Placeholder_dso_binary_type } dso_binary_type ;
struct TYPE_2__ {char* symfs; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int,char*) ;
 int * FUNC_1 (struct dso*,char*,size_t) ;
 int FUNC_2 (char*,char*,size_t) ;
 int FUNC_3 (char*,size_t,char*,char*,char*,...) ;
 int FUNC_4 (char*,char*,size_t) ;
 TYPE_1__ VAR_1 ;

int FUNC_5(struct dso *VAR_2, enum dso_binary_type VAR_3,
     char *VAR_4, char *VAR_5, size_t VAR_6)
{
 char VAR_7[VAR_0 * 2 + 1];
 int VAR_8 = 0;

 switch (VAR_3) {
 case 139: {
  char *VAR_9;

  FUNC_4(VAR_5, VAR_2->long_name, VAR_6);
  VAR_9 = VAR_5 + VAR_2->long_name_len;
  while (VAR_9 != VAR_5 && *VAR_9 != '/')
   VAR_9--;
  if (*VAR_9 == '/')
   VAR_9++;
  FUNC_2(VAR_2->long_name, VAR_9,
      VAR_6 - (VAR_9 - VAR_5));
  }
  break;
 case 140:

  if (VAR_1.symfs[0] ||
      (FUNC_1(VAR_2, VAR_5, VAR_6) == ((void*)0)))
   VAR_8 = -1;
  break;

 case 138:
  FUNC_3(VAR_5, VAR_6, "%s/usr/lib/debug%s.debug",
    VAR_1.symfs, VAR_2->long_name);
  break;

 case 129:
  FUNC_3(VAR_5, VAR_6, "%s/usr/lib/debug%s",
    VAR_1.symfs, VAR_2->long_name);
  break;

 case 141:
  if (!VAR_2->has_build_id) {
   VAR_8 = -1;
   break;
  }

  FUNC_0(VAR_2->build_id,
      sizeof(VAR_2->build_id),
      VAR_7);
  FUNC_3(VAR_5, VAR_6,
    "%s/usr/lib/debug/.build-id/%.2s/%s.debug",
    VAR_1.symfs, VAR_7, VAR_7 + 2);
  break;

 case 131:
  FUNC_3(VAR_5, VAR_6, "%s%s",
    VAR_1.symfs, VAR_2->long_name);
  break;

 case 136:
  FUNC_3(VAR_5, VAR_6, "%s%s%s", VAR_1.symfs,
    VAR_4, VAR_2->long_name);
  break;

 case 130:
  FUNC_3(VAR_5, VAR_6, "%s%s", VAR_1.symfs,
    VAR_2->long_name);
  break;

 default:
 case 133:
 case 128:
 case 137:
 case 135:
 case 134:
 case 132:
  VAR_8 = -1;
  break;
 }

 return VAR_8;
}
