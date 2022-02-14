
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct fst_iface_cfg {char* group_id; int llt; scalar_t__ priority; } ;
typedef scalar_t__ Boolean ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,scalar_t__*,char**) ;
 scalar_t__ FUNC_1 (char const*,char*,int,char**) ;
 int FUNC_2 (int ) ;
 char* FUNC_3 (char*,int ) ;

int FUNC_4(const char *VAR_4, char *VAR_5, size_t VAR_6,
        struct fst_iface_cfg *VAR_7)
{
 char *VAR_8;
 char *VAR_9;
 Boolean VAR_10;
 int VAR_11;

 if (FUNC_1(VAR_4, VAR_5, VAR_6, &VAR_9) ||
     FUNC_1(VAR_9, VAR_7->group_id, sizeof(VAR_7->group_id),
         &VAR_9))
  return -VAR_0;

 VAR_7->llt = VAR_3;
 VAR_7->priority = 0;
 VAR_8 = FUNC_3(VAR_9, VAR_1);
 if (VAR_8) {
  VAR_8 += FUNC_2(VAR_1);
  if (*VAR_8 == '=') {
   VAR_11 = FUNC_0(VAR_8 + 1, &VAR_10,
            &VAR_9);
   if (VAR_10)
    VAR_7->llt = VAR_11;
  }
 }
 VAR_8 = FUNC_3(VAR_9, VAR_2);
 if (VAR_8) {
  VAR_8 += FUNC_2(VAR_2);
  if (*VAR_8 == '=') {
   VAR_11 = FUNC_0(VAR_8 + 1, &VAR_10,
            &VAR_9);
   if (VAR_10)
    VAR_7->priority = (u8) VAR_11;
  }
 }

 return 0;
}
