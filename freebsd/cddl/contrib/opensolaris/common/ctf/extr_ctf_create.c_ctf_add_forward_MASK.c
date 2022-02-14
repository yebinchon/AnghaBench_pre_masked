
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint_t ;
typedef int ctf_id_t ;
struct TYPE_12__ {int h_type; } ;
typedef TYPE_2__ ctf_helem_t ;
typedef int ctf_hash_t ;
struct TYPE_13__ {int ctf_enums; int ctf_unions; int ctf_structs; } ;
typedef TYPE_3__ ctf_file_t ;
struct TYPE_11__ {int ctt_type; int ctt_info; } ;
struct TYPE_14__ {TYPE_1__ dtd_data; } ;
typedef TYPE_4__ ctf_dtdef_t ;


 int VAR_0 ;

 int VAR_1 ;


 int FUNC_0 (int ,int,int ) ;
 int VAR_2 ;
 int FUNC_1 (TYPE_3__*,int,char const*,TYPE_4__**) ;
 TYPE_2__* FUNC_2 (int *,TYPE_3__*,char const*,int ) ;
 int FUNC_3 (TYPE_3__*,int ) ;
 int FUNC_4 (char const*) ;

ctf_id_t
FUNC_5(ctf_file_t *VAR_3, uint_t VAR_4, const char *VAR_5, uint_t VAR_6)
{
 ctf_hash_t *VAR_7;
 ctf_helem_t *VAR_8;
 ctf_dtdef_t *VAR_9;
 ctf_id_t VAR_10;

 switch (VAR_6) {
 case 129:
  VAR_7 = &VAR_3->ctf_structs;
  break;
 case 128:
  VAR_7 = &VAR_3->ctf_unions;
  break;
 case 130:
  VAR_7 = &VAR_3->ctf_enums;
  break;
 default:
  return (FUNC_3(VAR_3, VAR_2));
 }





 if (VAR_5 != ((void*)0) && (VAR_8 = FUNC_2(VAR_7,
     VAR_3, VAR_5, FUNC_4(VAR_5))) != ((void*)0))
  return (VAR_8->h_type);

 if ((VAR_10 = FUNC_1(VAR_3, VAR_4, VAR_5, &VAR_9)) == VAR_0)
  return (VAR_0);

 VAR_9->dtd_data.ctt_info = FUNC_0(VAR_1, VAR_4, 0);
 VAR_9->dtd_data.ctt_type = VAR_6;

 return (VAR_10);
}
