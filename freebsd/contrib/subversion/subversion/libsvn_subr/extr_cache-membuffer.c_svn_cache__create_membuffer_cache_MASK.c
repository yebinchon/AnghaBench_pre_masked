
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_13__ {int prefix_pool; } ;
typedef TYPE_3__ svn_membuffer_t ;
struct TYPE_11__ {char* fingerprint; int key_len; scalar_t__ prefix_idx; } ;
struct TYPE_17__ {scalar_t__ data; } ;
struct TYPE_12__ {TYPE_1__ entry_key; TYPE_7__ full_key; } ;
struct TYPE_14__ {int key_len; TYPE_2__ combined_key; TYPE_1__ prefix; int mutex; int priority; scalar_t__ deserializer; scalar_t__ serializer; TYPE_3__* membuffer; } ;
typedef TYPE_4__ svn_membuffer_cache_t ;
typedef int svn_error_t ;
struct TYPE_15__ {char const* digest; } ;
typedef TYPE_5__ svn_checksum_t ;
struct TYPE_16__ {int pretend_empty; scalar_t__ error_baton; scalar_t__ error_handler; TYPE_4__* cache_internal; int * vtable; } ;
typedef TYPE_6__ svn_cache__t ;
typedef scalar_t__ svn_cache__serialize_func_t ;
typedef scalar_t__ svn_cache__deserialize_func_t ;
typedef int svn_boolean_t ;
typedef int apr_uint32_t ;
typedef int apr_ssize_t ;
typedef int apr_size_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int * VAR_4 ;
 int FUNC_2 (char*) ;
 void* FUNC_3 (int *,int) ;
 scalar_t__ VAR_5 ;
 int FUNC_4 (char*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_5 (char*,char const*,int) ;
 int FUNC_6 (char*,int ,int) ;
 int FUNC_7 (scalar_t__*,int ,char const*) ;
 scalar_t__ VAR_8 ;
 int FUNC_8 (char const*) ;
 int FUNC_9 (TYPE_5__**,int ,char const*,int,int *) ;
 int VAR_9 ;
 int * FUNC_10 (int ,int *,int ) ;
 int FUNC_11 (TYPE_7__*,int,int *) ;
 int FUNC_12 (int *,int ,int *) ;

svn_error_t *
FUNC_13(svn_cache__t **VAR_10,
                                  svn_membuffer_t *VAR_11,
                                  svn_cache__serialize_func_t VAR_12,
                                  svn_cache__deserialize_func_t VAR_13,
                                  apr_ssize_t VAR_14,
                                  const char *VAR_15,
                                  apr_uint32_t VAR_16,
                                  svn_boolean_t VAR_17,
                                  svn_boolean_t VAR_18,
                                  apr_pool_t *VAR_19,
                                  apr_pool_t *VAR_20)
{
  svn_checksum_t *VAR_21;
  apr_size_t VAR_22, VAR_23;



  svn_cache__t *VAR_24 = FUNC_3(VAR_19, sizeof(*VAR_24));
  svn_membuffer_cache_t *VAR_25 = FUNC_3(VAR_19, sizeof(*VAR_25));



  VAR_25->membuffer = VAR_11;
  VAR_25->serializer = VAR_12
                    ? VAR_12
                    : VAR_8;
  VAR_25->deserializer = VAR_13
                      ? VAR_13
                      : VAR_5;
  VAR_25->priority = VAR_16;
  VAR_25->key_len = VAR_14;

  FUNC_1(FUNC_12(&VAR_25->mutex, VAR_17, VAR_19));



  VAR_23 = FUNC_8(VAR_15) + 1;
  VAR_22 = FUNC_0(VAR_23);


  if (VAR_23 >= VAR_3)
    return FUNC_10(VAR_2, ((void*)0),
                            FUNC_2("Prefix too long"));


  FUNC_1(FUNC_9(&VAR_21,
                       VAR_9,
                       VAR_15,
                       FUNC_8(VAR_15),
                       VAR_20));
  FUNC_5(VAR_25->prefix.fingerprint, VAR_21->digest,
         sizeof(VAR_25->prefix.fingerprint));
  VAR_25->prefix.key_len = VAR_22;



  if ( (VAR_14 != VAR_0)
      && (VAR_14 <= sizeof(VAR_25->combined_key.entry_key.fingerprint))
      && !VAR_18)
    FUNC_1(FUNC_7(&VAR_25->prefix.prefix_idx,
                            VAR_11->prefix_pool,
                            VAR_15));
  else
    VAR_25->prefix.prefix_idx = VAR_1;



  if (VAR_25->prefix.prefix_idx == VAR_1)
    {


      VAR_25->combined_key.entry_key = VAR_25->prefix;
      FUNC_11(&VAR_25->combined_key.full_key, VAR_22 + 200,
                         VAR_19);
      FUNC_5((char *)VAR_25->combined_key.full_key.data, VAR_15,
             VAR_23);
      FUNC_6((char *)VAR_25->combined_key.full_key.data + VAR_23, 0,
             VAR_22 - VAR_23);
    }
  else
    {




      VAR_25->combined_key.entry_key.prefix_idx = VAR_25->prefix.prefix_idx;
      VAR_25->combined_key.entry_key.key_len = 0;
    }



  VAR_24->vtable = VAR_17 ? &VAR_6
                                : &VAR_7;
  VAR_24->cache_internal = VAR_25;
  VAR_24->error_handler = 0;
  VAR_24->error_baton = 0;
  VAR_24->pretend_empty = !!FUNC_4("SVN_X_DOES_NOT_MARK_THE_SPOT");

  *VAR_10 = VAR_24;
  return VAR_4;
}
