
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ svn_revnum_t ;
typedef scalar_t__ svn_boolean_t ;
struct revision_baton {struct directory_baton* db; int pool; } ;
struct directory_baton {char const* copyfrom_path; scalar_t__ copyfrom_rev; char const* relpath; struct directory_baton* parent; void* baton; } ;


 scalar_t__ FUNC_0 (char const*,scalar_t__) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_0 ;
 struct directory_baton* FUNC_2 (int ,int) ;
 char* FUNC_3 (char const*,int *) ;
 char* FUNC_4 (char const*,char const*,int ) ;

__attribute__((used)) static void
FUNC_5(struct revision_baton *VAR_1,
               void *VAR_2,
               const char *VAR_3,
               svn_boolean_t VAR_4,
               const char *VAR_5,
               svn_revnum_t VAR_6)
{
  struct directory_baton *VAR_7 = FUNC_2(VAR_1->pool, sizeof (*VAR_7));

  FUNC_1(
    VAR_4 || (VAR_5 == ((void*)0) && VAR_6 == VAR_0));



  if (!VAR_4
      && FUNC_0(VAR_1->db->copyfrom_path, VAR_1->db->copyfrom_rev))
    {
      const char *VAR_8 = FUNC_3(VAR_3, ((void*)0));

      VAR_5 = FUNC_4(VAR_1->db->copyfrom_path, VAR_8,
                                       VAR_1->pool);
      VAR_6 = VAR_1->db->copyfrom_rev;
    }

  VAR_7->baton = VAR_2;
  VAR_7->relpath = VAR_3;
  VAR_7->copyfrom_path = VAR_5;
  VAR_7->copyfrom_rev = VAR_6;
  VAR_7->parent = VAR_1->db;
  VAR_1->db = VAR_7;
}
