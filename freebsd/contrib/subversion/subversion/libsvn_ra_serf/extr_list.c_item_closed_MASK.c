
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {char* data; } ;
typedef TYPE_1__ svn_string_t ;
typedef int svn_ra_serf__xml_estate_t ;
typedef int svn_error_t ;
struct TYPE_10__ {int * last_author; int time; int created_rev; int size; int kind; int has_props; int member_0; } ;
typedef TYPE_2__ svn_dirent_t ;
struct TYPE_11__ {int * author; int receiver_baton; int (* receiver ) (char const*,TYPE_2__*,int ,int *) ;TYPE_4__* author_buf; } ;
typedef TYPE_3__ list_context_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
struct TYPE_12__ {int * data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * VAR_6 ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char const*,char*) ;
 int FUNC_3 (char const*,TYPE_2__*,int ,int *) ;
 TYPE_1__* FUNC_4 (TYPE_1__ const*,int *) ;
 int FUNC_5 (int *,char const*) ;
 int * FUNC_6 (int ,int *,int ,char const*) ;
 int FUNC_7 (int *,char*,int ) ;
 char* FUNC_8 (int *,char*) ;
 int FUNC_9 (char const*) ;
 int FUNC_10 (int *,char const*,int *) ;
 int FUNC_11 (TYPE_4__*,char*) ;
 int FUNC_12 (int *,char const*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_13(svn_ra_serf__xml_estate_t *VAR_7,
            void *VAR_8,
            int VAR_9,
            const svn_string_t *VAR_10,
            apr_hash_t *VAR_11,
            apr_pool_t *VAR_12)
{
  list_context_t *VAR_13 = VAR_8;

  if (VAR_9 == VAR_0)
    {






      const char *VAR_14 = FUNC_8(VAR_11, "encoding");
      if (VAR_14)
        {


          if (FUNC_2(VAR_14, "base64") != 0)
            {
              return FUNC_6(VAR_3, ((void*)0),
                                       FUNC_1("Unsupported encoding '%s'"),
                                       VAR_14);
            }

          VAR_10 = FUNC_4(VAR_10, VAR_12);
        }


      FUNC_11(VAR_13->author_buf, VAR_10->data);
      VAR_13->author = VAR_13->author_buf->data;
    }
  else if (VAR_9 == VAR_2)
    {
      const char *VAR_15 = VAR_10->data;
      const char *VAR_16, *VAR_17, *VAR_18, *VAR_19;
      svn_dirent_t VAR_20 = { 0 };

      VAR_16 = FUNC_8(VAR_11, "node-kind");
      VAR_19 = FUNC_8(VAR_11, "size");

      VAR_20.has_props = FUNC_7(VAR_11, "has-props", VAR_1);
      VAR_18 = FUNC_8(VAR_11, "created-rev");
      VAR_17 = FUNC_8(VAR_11, "date");


      VAR_20.kind = FUNC_9(VAR_16);

      if (VAR_19)
        FUNC_0(FUNC_5(&VAR_20.size, VAR_19));
      else
        VAR_20.size = VAR_4;

      if (VAR_18)
        FUNC_0(FUNC_10(&VAR_20.created_rev, VAR_18, ((void*)0)));
      else
        VAR_20.created_rev = VAR_5;

      if (VAR_17)
        FUNC_0(FUNC_12(&VAR_20.time, VAR_17, VAR_12));

      if (VAR_13->author)
        VAR_20.last_author = VAR_13->author;


      FUNC_0(VAR_13->receiver(VAR_15, &VAR_20,
                                 VAR_13->receiver_baton, VAR_12));


      VAR_13->author = ((void*)0);
    }

  return VAR_6;
}
