
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int key_len; int * fingerprint; } ;
struct TYPE_7__ {int key_len; int * fingerprint; } ;
struct TYPE_11__ {scalar_t__ data; } ;
struct TYPE_8__ {TYPE_1__ entry_key; TYPE_5__ full_key; } ;
struct TYPE_10__ {TYPE_3__ prefix; TYPE_2__ combined_key; } ;
typedef TYPE_4__ svn_membuffer_cache_t ;
typedef int apr_uint32_t ;
typedef scalar_t__ apr_ssize_t ;
typedef int apr_size_t ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (char*,void const*,scalar_t__) ;
 int FUNC_2 (char*,int ,int) ;
 scalar_t__ FUNC_3 (char const*) ;
 int FUNC_4 (int *,void const*,scalar_t__) ;
 int FUNC_5 (TYPE_5__*,int) ;

__attribute__((used)) static void
FUNC_6(svn_membuffer_cache_t *VAR_1,
                 const void *VAR_2,
                 apr_ssize_t VAR_3)
{
  apr_uint32_t *VAR_4;
  char *VAR_5;
  apr_size_t VAR_6 = VAR_1->prefix.key_len;
  apr_size_t VAR_7;


  if (VAR_3 == VAR_0)
    VAR_3 = FUNC_3((const char *) VAR_2);

  VAR_7 = FUNC_0(VAR_3);


  FUNC_5(&VAR_1->combined_key.full_key,
                     VAR_7 + VAR_6);

  VAR_5 = (char *)VAR_1->combined_key.full_key.data + VAR_6;
  VAR_1->combined_key.entry_key.key_len = VAR_7 + VAR_6;
  FUNC_1(VAR_5, VAR_2, VAR_3);
  FUNC_2(VAR_5 + VAR_3, 0, VAR_7 - VAR_3);


  VAR_4 = (apr_uint32_t *)VAR_1->combined_key.entry_key.fingerprint;
  FUNC_4(VAR_4, VAR_2, VAR_3);


  VAR_1->combined_key.entry_key.fingerprint[0]
    ^= VAR_1->prefix.fingerprint[0];
  VAR_1->combined_key.entry_key.fingerprint[1]
    ^= VAR_1->prefix.fingerprint[1];
}
