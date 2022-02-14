
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint_t ;
typedef int ctf_id_t ;
typedef int ctf_file_t ;
struct TYPE_9__ {int cte_bits; } ;
typedef TYPE_3__ ctf_encoding_t ;
struct TYPE_7__ {TYPE_3__ dtu_enc; } ;
struct TYPE_8__ {int ctt_size; int ctt_info; } ;
struct TYPE_10__ {TYPE_1__ dtd_u; TYPE_2__ dtd_data; } ;
typedef TYPE_4__ ctf_dtdef_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *,int ,char const*,TYPE_4__**) ;
 int FUNC_4 (int *,int ) ;

__attribute__((used)) static ctf_id_t
FUNC_5(ctf_file_t *VAR_3, uint_t VAR_4,
    const char *VAR_5, const ctf_encoding_t *VAR_6, uint_t VAR_7)
{
 ctf_dtdef_t *VAR_8;
 ctf_id_t VAR_9;

 if (VAR_6 == ((void*)0))
  return (FUNC_4(VAR_3, VAR_1));

 if ((VAR_9 = FUNC_3(VAR_3, VAR_4, VAR_5, &VAR_8)) == VAR_0)
  return (VAR_0);

 VAR_8->dtd_data.ctt_info = FUNC_0(VAR_7, VAR_4, 0);
 VAR_8->dtd_data.ctt_size = FUNC_2(FUNC_1(VAR_6->cte_bits, VAR_2) / VAR_2);
 VAR_8->dtd_u.dtu_enc = *VAR_6;

 return (VAR_9);
}
