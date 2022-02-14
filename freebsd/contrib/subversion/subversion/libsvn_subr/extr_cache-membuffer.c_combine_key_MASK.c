
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ prefix_idx; int* fingerprint; } ;
struct TYPE_7__ {int* fingerprint; } ;
struct TYPE_8__ {TYPE_1__ entry_key; } ;
struct TYPE_10__ {TYPE_3__ prefix; TYPE_2__ combined_key; } ;
typedef TYPE_4__ svn_membuffer_cache_t ;
typedef int apr_uint64_t ;
typedef int apr_ssize_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_4__*,void const*,int) ;
 int FUNC_3 (int*,void const*,int) ;

__attribute__((used)) static void
FUNC_4(svn_membuffer_cache_t *VAR_2,
            const void *VAR_3,
            apr_ssize_t VAR_4)
{

  apr_uint64_t VAR_5[2];


  if (VAR_2->prefix.prefix_idx == VAR_1)
    {
      FUNC_2(VAR_2, VAR_3, VAR_4);
      return;
    }


  if (VAR_4 == 16)
    {
      FUNC_3(VAR_5, VAR_3, 16);
    }
  else if (VAR_4 == 8)
    {
      FUNC_3(VAR_5, VAR_3, 8);
      VAR_5[1] = 0;
    }
  else
    {
      FUNC_1(VAR_4 != VAR_0 && VAR_4 < 16);
      VAR_5[0] = 0;
      VAR_5[1] = 0;
      FUNC_3(VAR_5, VAR_3, VAR_4);
    }
  VAR_5[1] = (VAR_5[1] << 27) | (VAR_5[1] >> 37);
  VAR_5[1] ^= VAR_5[0] & 0xffff;
  VAR_5[0] ^= VAR_5[1] & FUNC_0(0xffffffffffff0000);






  VAR_2->combined_key.entry_key.fingerprint[0]
    = VAR_5[0] ^ VAR_2->prefix.fingerprint[0];
  VAR_2->combined_key.entry_key.fingerprint[1]
    = VAR_5[1] ^ VAR_2->prefix.fingerprint[1];
}
