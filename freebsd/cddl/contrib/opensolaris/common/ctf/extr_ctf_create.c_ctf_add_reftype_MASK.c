
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ ushort_t ;
typedef int uint_t ;
typedef scalar_t__ ctf_id_t ;
typedef int ctf_file_t ;
struct TYPE_4__ {scalar_t__ ctt_type; int ctt_info; } ;
struct TYPE_5__ {TYPE_1__ dtd_data; } ;
typedef TYPE_2__ ctf_dtdef_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int *,int ,int *,TYPE_2__**) ;
 int FUNC_2 (int *,scalar_t__) ;
 scalar_t__ FUNC_3 (int *,int ) ;

__attribute__((used)) static ctf_id_t
FUNC_4(ctf_file_t *VAR_3, uint_t VAR_4, ctf_id_t VAR_5, uint_t VAR_6)
{
 ctf_dtdef_t *VAR_7;
 ctf_id_t VAR_8;

 if (VAR_5 == VAR_0 || VAR_5 < 0 || VAR_5 > VAR_1)
  return (FUNC_3(VAR_3, VAR_2));

 if ((VAR_8 = FUNC_1(VAR_3, VAR_4, ((void*)0), &VAR_7)) == VAR_0)
  return (VAR_0);

 FUNC_2(VAR_3, VAR_5);

 VAR_7->dtd_data.ctt_info = FUNC_0(VAR_6, VAR_4, 0);
 VAR_7->dtd_data.ctt_type = (ushort_t)VAR_5;

 return (VAR_8);
}
