
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint_t ;
struct TYPE_5__ {int ctt_name; } ;
typedef TYPE_1__ ctf_type_t ;
typedef int ctf_id_t ;
typedef int ctf_file_t ;
typedef int ctf_encoding_t ;
struct TYPE_6__ {int ctr_index; int ctr_contents; int ctr_nelems; } ;
typedef TYPE_2__ ctf_arinfo_t ;
 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (int *,int ,TYPE_2__*) ;
 TYPE_1__* FUNC_2 (int **,int ) ;
 int FUNC_3 (int *,int ) ;
 scalar_t__ FUNC_4 (int *,int ,int *,int ) ;
 int FUNC_5 (int *,int ,int *) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int *,int ) ;
 scalar_t__ FUNC_10 (int ,int ) ;

int
FUNC_11(ctf_file_t *VAR_0, ctf_id_t VAR_1,
    ctf_file_t *VAR_2, ctf_id_t VAR_3)
{
 const ctf_type_t *VAR_4, *VAR_5;
 ctf_encoding_t VAR_6, VAR_7;
 ctf_arinfo_t VAR_8, VAR_9;
 uint_t VAR_10, VAR_11;

 if (FUNC_4(VAR_0, VAR_1, VAR_2, VAR_3) == 0)
  return (1);

 VAR_1 = FUNC_8(VAR_0, VAR_1);
 VAR_10 = FUNC_6(VAR_0, VAR_1);

 VAR_3 = FUNC_8(VAR_2, VAR_3);
 VAR_11 = FUNC_6(VAR_2, VAR_3);

 if (VAR_10 != VAR_11 ||
     (VAR_4 = FUNC_2(&VAR_0, VAR_1)) == ((void*)0) ||
     (VAR_5 = FUNC_2(&VAR_2, VAR_3)) == ((void*)0) ||
     FUNC_10(FUNC_3(VAR_0, VAR_4->ctt_name),
     FUNC_3(VAR_2, VAR_5->ctt_name)) != 0)
  return (0);

 switch (VAR_10) {
 case 131:
 case 133:
  return (FUNC_5(VAR_0, VAR_1, &VAR_6) == 0 &&
      FUNC_5(VAR_2, VAR_3, &VAR_7) == 0 &&
      FUNC_0(&VAR_6, &VAR_7, sizeof (ctf_encoding_t)) == 0);
 case 130:
  return (FUNC_11(VAR_0, FUNC_7(VAR_0, VAR_1),
      VAR_2, FUNC_7(VAR_2, VAR_3)));
 case 135:
  return (FUNC_1(VAR_0, VAR_1, &VAR_8) == 0 &&
      FUNC_1(VAR_2, VAR_3, &VAR_9) == 0 &&
      VAR_8.ctr_nelems == VAR_9.ctr_nelems && FUNC_11(
      VAR_0, VAR_8.ctr_contents, VAR_2, VAR_9.ctr_contents) &&
      FUNC_11(VAR_0, VAR_8.ctr_index, VAR_2, VAR_9.ctr_index));
 case 129:
 case 128:
  return (FUNC_9(VAR_0, VAR_1) == FUNC_9(VAR_2, VAR_3));
 case 134:
 case 132:
  return (1);
 default:
  return (0);
 }
}
