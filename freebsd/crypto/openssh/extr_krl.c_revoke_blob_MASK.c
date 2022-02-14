
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct revoked_blob {size_t len; struct revoked_blob* blob; } ;
typedef struct revoked_blob u_char ;
struct revoked_blob_tree {int dummy; } ;


 struct revoked_blob* FUNC_0 (int ,struct revoked_blob_tree*,struct revoked_blob*) ;
 int VAR_0 ;
 struct revoked_blob* FUNC_1 (int,int) ;
 int FUNC_2 (struct revoked_blob*) ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_3(struct revoked_blob_tree *VAR_2, u_char *VAR_3, size_t VAR_4)
{
 struct revoked_blob *VAR_5, *VAR_6;

 if ((VAR_5 = FUNC_1(1, sizeof(*VAR_5))) == ((void*)0))
  return VAR_0;
 VAR_5->blob = VAR_3;
 VAR_5->len = VAR_4;
 VAR_6 = FUNC_0(VAR_1, VAR_2, VAR_5);
 if (VAR_6 != ((void*)0)) {
  FUNC_2(VAR_5->blob);
  FUNC_2(VAR_5);
 }
 return 0;
}
