
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int trail_t ;
typedef int svn_fs_t ;
typedef int svn_error_t ;
struct TYPE_7__ {char* string_key; } ;
struct TYPE_8__ {TYPE_1__ fulltext; } ;
struct TYPE_9__ {scalar_t__ kind; int * sha1_checksum; int * md5_checksum; TYPE_2__ contents; } ;
typedef TYPE_3__ representation_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (TYPE_3__*,char const*) ;
 scalar_t__ VAR_2 ;
 int * FUNC_4 (int ,int *,int ,char const*) ;
 int FUNC_5 (TYPE_3__**,int *,char const*,int *,int *) ;
 int FUNC_6 (int *,char const*,int *,int *) ;
 int FUNC_7 (int *,char const*,TYPE_3__*,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_8(svn_fs_t *VAR_3,
                   const char *VAR_4,
                   const char *VAR_5,
                   trail_t *VAR_6,
                   apr_pool_t *VAR_7)
{
  representation_t *VAR_8;
  const char *VAR_9;

  FUNC_0(FUNC_5(&VAR_8, VAR_3, VAR_4, VAR_6, VAR_7));


  if (! FUNC_3(VAR_8, VAR_5))
    return FUNC_4
      (VAR_0, ((void*)0),
       FUNC_2("Rep '%s' is not mutable"), VAR_4);

  FUNC_1(VAR_8->kind == VAR_2);



  VAR_9 = VAR_8->contents.fulltext.string_key;
  if (VAR_9 && *VAR_9)
    {
      FUNC_0(FUNC_6(VAR_3, VAR_9, VAR_6, VAR_7));
      VAR_8->md5_checksum = ((void*)0);
      VAR_8->sha1_checksum = ((void*)0);
      FUNC_0(FUNC_7(VAR_3, VAR_4, VAR_8, VAR_6, VAR_7));
    }
  return VAR_1;
}
