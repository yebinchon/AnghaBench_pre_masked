
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_revnum_t ;
typedef int svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
struct edit_baton {scalar_t__ notify_func; scalar_t__ check_normalization; scalar_t__ verify; } ;
struct dir_baton {int check_name_collision; int deleted_entries; struct edit_baton* edit_baton; } ;
typedef int apr_pool_t ;


 scalar_t__ FUNC_0 (char const*,int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int * VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct edit_baton*,char const*,int ,int ,scalar_t__,char const*,int ,int *) ;
 void* FUNC_3 (int ,char const*) ;
 int FUNC_4 (int ,char const*,int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static svn_error_t *
FUNC_5(const char *VAR_7,
         void *VAR_8,
         const char *VAR_9,
         svn_revnum_t VAR_10,
         apr_pool_t *VAR_11,
         void **VAR_12)
{
  struct dir_baton *VAR_13 = VAR_8;
  struct edit_baton *VAR_14 = VAR_13->edit_baton;
  void *VAR_15;
  svn_boolean_t VAR_16 = VAR_0;


  VAR_15 = FUNC_3(VAR_13->deleted_entries, VAR_7);


  VAR_16 = FUNC_0(VAR_9, VAR_10);


  FUNC_1(FUNC_2(VAR_14, VAR_7,
                    VAR_6,
                    VAR_15 ? VAR_5 : VAR_4,
                    VAR_16,
                    VAR_16 ? VAR_9 : ((void*)0),
                    VAR_16 ? VAR_10 : VAR_1,
                    VAR_11));

  if (VAR_15)

    FUNC_4(VAR_13->deleted_entries, VAR_7, ((void*)0));



  if (!VAR_15 && VAR_14->verify && VAR_14->check_normalization && VAR_14->notify_func)
    {
      VAR_13->check_name_collision = VAR_3;
    }

  *VAR_12 = ((void*)0);
  return VAR_2;
}
