
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct netlbl_audit {int dummy; } ;
struct cipso_v4_doi {size_t doi; size_t type; int* tags; int list; int refcount; } ;
struct audit_buffer {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;






 size_t VAR_2 ;


 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (struct audit_buffer*) ;
 int FUNC_2 (struct audit_buffer*,char*,size_t,char const*,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int * FUNC_3 (scalar_t__) ;
 int FUNC_4 (int *,int *) ;
 struct audit_buffer* FUNC_5 (int ,struct netlbl_audit*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

int FUNC_8(struct cipso_v4_doi *VAR_7,
       struct netlbl_audit *VAR_8)
{
 int VAR_9 = -VAR_4;
 u32 VAR_10;
 u32 VAR_11;
 u32 VAR_12;
 struct audit_buffer *VAR_13;

 VAR_11 = VAR_7->doi;
 VAR_12 = VAR_7->type;

 if (VAR_7 == ((void*)0) || VAR_7->doi == VAR_1)
  goto doi_add_return;
 for (VAR_10 = 0; VAR_10 < VAR_2; VAR_10++) {
  switch (VAR_7->tags[VAR_10]) {
  case 128:
   break;
  case 129:
  case 132:
   if (VAR_7->type != 134)
    goto doi_add_return;
   break;
  case 130:
   if (VAR_7->type != 135)
    goto doi_add_return;
   break;
  case 131:
   if (VAR_10 == 0)
    goto doi_add_return;
   break;
  default:
   goto doi_add_return;
  }
 }

 FUNC_0(&VAR_7->refcount, 1);

 FUNC_6(&VAR_6);
 if (FUNC_3(VAR_7->doi) != ((void*)0)) {
  FUNC_7(&VAR_6);
  VAR_9 = -VAR_3;
  goto doi_add_return;
 }
 FUNC_4(&VAR_7->list, &VAR_5);
 FUNC_7(&VAR_6);
 VAR_9 = 0;

doi_add_return:
 VAR_13 = FUNC_5(VAR_0, VAR_8);
 if (VAR_13 != ((void*)0)) {
  const char *VAR_14;
  switch (VAR_12) {
  case 133:
   VAR_14 = "trans";
   break;
  case 134:
   VAR_14 = "pass";
   break;
  case 135:
   VAR_14 = "local";
   break;
  default:
   VAR_14 = "(unknown)";
  }
  FUNC_2(VAR_13,
     " cipso_doi=%u cipso_type=%s res=%u",
     VAR_11, VAR_14, VAR_9 == 0 ? 1 : 0);
  FUNC_1(VAR_13);
 }

 return VAR_9;
}
