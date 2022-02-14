
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_43__ TYPE_9__ ;
typedef struct TYPE_42__ TYPE_8__ ;
typedef struct TYPE_41__ TYPE_7__ ;
typedef struct TYPE_40__ TYPE_6__ ;
typedef struct TYPE_39__ TYPE_5__ ;
typedef struct TYPE_38__ TYPE_4__ ;
typedef struct TYPE_37__ TYPE_3__ ;
typedef struct TYPE_36__ TYPE_2__ ;
typedef struct TYPE_35__ TYPE_1__ ;
typedef struct TYPE_34__ TYPE_18__ ;
typedef struct TYPE_33__ TYPE_17__ ;
typedef struct TYPE_32__ TYPE_16__ ;
typedef struct TYPE_31__ TYPE_15__ ;
typedef struct TYPE_30__ TYPE_14__ ;
typedef struct TYPE_29__ TYPE_13__ ;
typedef struct TYPE_28__ TYPE_12__ ;
typedef struct TYPE_27__ TYPE_11__ ;
typedef struct TYPE_26__ TYPE_10__ ;


struct TYPE_31__ {int x_size; int x_lnno; } ;
struct TYPE_32__ {TYPE_15__ x_lnsz; void* x_fsize; } ;
struct TYPE_43__ {void** x_dimen; } ;
struct TYPE_41__ {int l; } ;
struct TYPE_42__ {TYPE_7__ x_endndx; int x_lnnoptr; } ;
struct TYPE_26__ {TYPE_9__ x_ary; TYPE_8__ x_fcn; } ;
struct TYPE_40__ {void* l; } ;
struct TYPE_33__ {TYPE_16__ x_misc; TYPE_10__ x_fcnary; void* x_tvndx; TYPE_6__ x_tagndx; } ;
struct TYPE_39__ {int x_comdat; int x_associated; int x_checksum; int x_nlinno; int x_nreloc; int x_scnlen; } ;
struct TYPE_35__ {void* x_offset; int x_zeroes; } ;
struct TYPE_37__ {int x_fname; TYPE_1__ x_n; } ;
union internal_auxent {TYPE_17__ x_sym; TYPE_5__ x_scn; TYPE_3__ x_file; } ;
typedef int bfd ;
struct TYPE_36__ {int x_offset; } ;
struct TYPE_38__ {int * x_fname; TYPE_2__ x_n; } ;
struct TYPE_29__ {int x_fsize; } ;
struct TYPE_27__ {int * x_dimen; } ;
struct TYPE_28__ {TYPE_11__ x_ary; } ;
struct TYPE_30__ {TYPE_13__ x_misc; TYPE_12__ x_fcnary; int x_tvndx; int x_tagndx; } ;
struct TYPE_34__ {TYPE_14__ x_sym; TYPE_4__ x_file; } ;
typedef TYPE_18__ AUXENT ;


 int FUNC_0 (int *,void*,int,int,int,int,void*) ;
 int FUNC_1 (int *,void*,int,int,int,int,void*) ;
 int VAR_0 ;
 int VAR_1 ;




 int VAR_2 ;
 int FUNC_2 (int *,TYPE_18__*) ;
 int FUNC_3 (int *,TYPE_18__*) ;
 int FUNC_4 (int *,TYPE_18__*) ;
 int FUNC_5 (int *,TYPE_18__*) ;
 int FUNC_6 (int *,TYPE_18__*) ;
 int FUNC_7 (int *,TYPE_18__*) ;
 int FUNC_8 (int *,TYPE_18__*) ;
 void* FUNC_9 (int *,int ) ;
 void* FUNC_10 (int *,int ) ;
 scalar_t__ FUNC_11 (int) ;
 scalar_t__ FUNC_12 (int) ;
 int VAR_3 ;
 int FUNC_13 (int ,int *,int) ;

__attribute__((used)) static void
FUNC_14 (bfd *VAR_4,
    void * VAR_5,
    int VAR_6,
    int VAR_7,
    int VAR_8,
    int VAR_9,
    void * VAR_10)
{
  AUXENT *VAR_11 = (AUXENT *) VAR_5;
  union internal_auxent *VAR_12 = (union internal_auxent *) VAR_10;





  switch (VAR_7)
    {
    case 131:
      if (VAR_11->x_file.x_fname[0] == 0)
 {
   VAR_12->x_file.x_n.x_zeroes = 0;
   VAR_12->x_file.x_n.x_offset = FUNC_10 (VAR_4, VAR_11->x_file.x_n.x_offset);
 }
      else
 {



   if (VAR_9 > 1)
     {
       if (VAR_8 == 0)
  FUNC_13 (VAR_12->x_file.x_fname, VAR_11->x_file.x_fname,
   VAR_9 * sizeof (AUXENT));
     }
   else
     FUNC_13 (VAR_12->x_file.x_fname, VAR_11->x_file.x_fname, VAR_2);

 }
      goto end;

    case 128:

    case 129:

    case 130:
      if (VAR_6 == VAR_3)
 {
   VAR_12->x_scn.x_scnlen = FUNC_8 (VAR_4, VAR_11);
   VAR_12->x_scn.x_nreloc = FUNC_7 (VAR_4, VAR_11);
   VAR_12->x_scn.x_nlinno = FUNC_6 (VAR_4, VAR_11);



   VAR_12->x_scn.x_checksum = 0;
   VAR_12->x_scn.x_associated = 0;
   VAR_12->x_scn.x_comdat = 0;

   goto end;
 }
      break;
    }

  VAR_12->x_sym.x_tagndx.l = FUNC_10 (VAR_4, VAR_11->x_sym.x_tagndx);

  VAR_12->x_sym.x_tvndx = FUNC_9 (VAR_4, VAR_11->x_sym.x_tvndx);


  if (VAR_7 == VAR_0 || VAR_7 == VAR_1 || FUNC_11 (VAR_6) || FUNC_12 (VAR_7))
    {
      VAR_12->x_sym.x_fcnary.x_fcn.x_lnnoptr = FUNC_3 (VAR_4, VAR_11);
      VAR_12->x_sym.x_fcnary.x_fcn.x_endndx.l = FUNC_2 (VAR_4, VAR_11);
    }
  else
    {



      VAR_12->x_sym.x_fcnary.x_ary.x_dimen[0] =
 FUNC_9 (VAR_4, VAR_11->x_sym.x_fcnary.x_ary.x_dimen[0]);
      VAR_12->x_sym.x_fcnary.x_ary.x_dimen[1] =
 FUNC_9 (VAR_4, VAR_11->x_sym.x_fcnary.x_ary.x_dimen[1]);
      VAR_12->x_sym.x_fcnary.x_ary.x_dimen[2] =
 FUNC_9 (VAR_4, VAR_11->x_sym.x_fcnary.x_ary.x_dimen[2]);
      VAR_12->x_sym.x_fcnary.x_ary.x_dimen[3] =
 FUNC_9 (VAR_4, VAR_11->x_sym.x_fcnary.x_ary.x_dimen[3]);
    }

  if (FUNC_11 (VAR_6))
    VAR_12->x_sym.x_misc.x_fsize = FUNC_10 (VAR_4, VAR_11->x_sym.x_misc.x_fsize);
  else
    {
      VAR_12->x_sym.x_misc.x_lnsz.x_lnno = FUNC_4 (VAR_4, VAR_11);
      VAR_12->x_sym.x_misc.x_lnsz.x_size = FUNC_5 (VAR_4, VAR_11);
    }

 end: ;




}
