
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {char* data; } ;
typedef TYPE_2__ svn_stringbuf_t ;
typedef void* svn_filesize_t ;
typedef int svn_error_t ;
struct TYPE_11__ {int digest; } ;
typedef TYPE_3__ svn_checksum_t ;
struct TYPE_9__ {int number; int noderev_txn_id; } ;
struct TYPE_12__ {scalar_t__ revision; TYPE_1__ uniquifier; int sha1_digest; int has_sha1; int md5_digest; void* expanded_size; void* size; scalar_t__ item_index; int txn_id; } ;
typedef TYPE_4__ representation_t ;
typedef scalar_t__ apr_uint64_t ;
typedef int apr_pool_t ;
typedef scalar_t__ apr_int64_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int * VAR_4 ;
 int FUNC_1 (char*) ;
 TYPE_4__* FUNC_2 (int *,int) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (scalar_t__*,char const**) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char const**,char*) ;
 int VAR_5 ;
 int FUNC_7 (TYPE_3__**,int ,char*,int *) ;
 int VAR_6 ;
 int FUNC_8 (scalar_t__*,char*) ;
 char* FUNC_9 (char*,char**) ;
 int * FUNC_10 (int ,int *,int ) ;
 int FUNC_11 (int *,char*) ;
 int FUNC_12 (int *) ;

svn_error_t *
FUNC_13(representation_t **VAR_7,
                                svn_stringbuf_t *VAR_8,
                                apr_pool_t *VAR_9,
                                apr_pool_t *VAR_10)
{
  representation_t *VAR_11;
  char *VAR_12;
  apr_int64_t VAR_13;
  char *VAR_14 = VAR_8->data;
  svn_checksum_t *VAR_15;
  const char *VAR_16;

  VAR_11 = FUNC_2(VAR_9, sizeof(*VAR_11));
  *VAR_7 = VAR_11;

  FUNC_0(FUNC_4(&VAR_11->revision, (const char **)&VAR_14));


  FUNC_12(&VAR_11->txn_id);


  VAR_12 = FUNC_9(" ", &VAR_14);
  if (VAR_12 == ((void*)0))
    {
      if (VAR_11->revision == VAR_3)
        return VAR_4;

      return FUNC_10(VAR_2, ((void*)0),
                              FUNC_1("Malformed text representation offset line in node-rev"));
    }

  FUNC_0(FUNC_8(&VAR_13, VAR_12));
  VAR_11->item_index = (apr_uint64_t)VAR_13;

  VAR_12 = FUNC_9(" ", &VAR_14);
  if (VAR_12 == ((void*)0))
    return FUNC_10(VAR_2, ((void*)0),
                            FUNC_1("Malformed text representation offset line in node-rev"));

  FUNC_0(FUNC_8(&VAR_13, VAR_12));
  VAR_11->size = (svn_filesize_t)VAR_13;

  VAR_12 = FUNC_9(" ", &VAR_14);
  if (VAR_12 == ((void*)0))
    return FUNC_10(VAR_2, ((void*)0),
                            FUNC_1("Malformed text representation offset line in node-rev"));

  FUNC_0(FUNC_8(&VAR_13, VAR_12));
  VAR_11->expanded_size = (svn_filesize_t)VAR_13;


  VAR_12 = FUNC_9(" ", &VAR_14);
  if ((VAR_12 == ((void*)0)) || (FUNC_5(VAR_12) != (VAR_0 * 2)))
    return FUNC_10(VAR_2, ((void*)0),
                            FUNC_1("Malformed text representation offset line in node-rev"));

  FUNC_0(FUNC_7(&VAR_15, VAR_5, VAR_12,
                                 VAR_10));



  if (VAR_15)
    FUNC_3(VAR_11->md5_digest, VAR_15->digest, sizeof(VAR_11->md5_digest));


  VAR_12 = FUNC_9(" ", &VAR_14);
  if (VAR_12 == ((void*)0))
    return VAR_4;


  if (VAR_12[0] == '-' && VAR_12[1] == 0)
    {
      VAR_15 = ((void*)0);
    }
  else
    {

      if (FUNC_5(VAR_12) != (VAR_1 * 2))
        return FUNC_10(VAR_2, ((void*)0),
                                FUNC_1("Malformed text representation offset line in node-rev"));

      FUNC_0(FUNC_7(&VAR_15, VAR_6, VAR_12,
                                     VAR_10));
    }




  VAR_11->has_sha1 = VAR_15 != ((void*)0);



  if (VAR_15)
    FUNC_3(VAR_11->sha1_digest, VAR_15->digest, sizeof(VAR_11->sha1_digest));

  VAR_12 = FUNC_9(" ", &VAR_14);
  if (VAR_12 == ((void*)0))
    return FUNC_10(VAR_2, ((void*)0),
                            FUNC_1("Malformed text representation offset line in node-rev"));


  if (VAR_12[0] == '-' && VAR_12[1] == 0)
    {
      VAR_16 = VAR_14;
    }
  else
    {
      char *VAR_17 = VAR_12;


      VAR_12 = FUNC_9("/", &VAR_17);
      if (VAR_12 == ((void*)0))
        return FUNC_10(VAR_2, ((void*)0),
                                FUNC_1("Malformed text representation offset line in node-rev"));

      FUNC_0(FUNC_11(&VAR_11->uniquifier.noderev_txn_id, VAR_12));

      VAR_12 = FUNC_9(" ", &VAR_17);
      if (VAR_12 == ((void*)0) || *VAR_12 != '_')
        return FUNC_10(VAR_2, ((void*)0),
                                FUNC_1("Malformed text representation offset line in node-rev"));

      ++VAR_12;
      VAR_11->uniquifier.number = FUNC_6(&VAR_16, VAR_12);
    }

  if (*VAR_16)
    return FUNC_10(VAR_2, ((void*)0),
                            FUNC_1("Malformed text representation offset line in node-rev"));

  return VAR_4;
}
