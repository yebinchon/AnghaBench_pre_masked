
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_11__ ;
typedef struct TYPE_13__ TYPE_10__ ;


union aux_ext {int a_ti; int a_rndx; } ;
struct type {int dummy; } ;
struct mdebug_pending {struct type* t; } ;
typedef enum type_code { ____Placeholder_type_code } type_code ;
struct TYPE_18__ {int csym; int isymBase; int issBase; int iauxBase; int fBigendian; } ;
struct TYPE_17__ {int rfd; int index; } ;
struct TYPE_16__ {scalar_t__ sc; scalar_t__ st; int iss; int index; } ;
struct TYPE_15__ {scalar_t__ tq0; int bt; } ;
struct TYPE_14__ {char* ss; union aux_ext* external_aux; scalar_t__ external_sym; TYPE_4__* fdr; } ;
struct TYPE_13__ {int external_sym_size; int (* swap_tir_in ) (int,int *,TYPE_1__*) ;int (* swap_sym_in ) (int ,char*,TYPE_2__*) ;int (* swap_rndx_in ) (int,int *,TYPE_3__*) ;} ;
typedef TYPE_1__ TIR ;
typedef TYPE_2__ SYMR ;
typedef TYPE_3__ RNDXR ;
typedef TYPE_4__ FDR ;


 unsigned int FUNC_0 (int,union aux_ext*) ;
 int FUNC_1 (scalar_t__) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_4__*,char*,struct type*) ;
 int FUNC_3 (char*,int,int) ;





 int FUNC_4 (int *,char*,...) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_11__* VAR_3 ;
 TYPE_10__* VAR_4 ;
 TYPE_4__* FUNC_5 (int,unsigned int) ;
 struct type* FUNC_6 (int,int ,int ,char*,int ) ;
 struct mdebug_pending* FUNC_7 (TYPE_4__*,char*) ;
 struct type* FUNC_8 (int,union aux_ext*,int,int*,int,char*) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_9 (int,int *,TYPE_3__*) ;
 int FUNC_10 (int ,char*,TYPE_2__*) ;
 int FUNC_11 (int,int *,TYPE_1__*) ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;

__attribute__((used)) static int
FUNC_12 (int VAR_14, union aux_ext *VAR_15, struct type **VAR_16, enum type_code VAR_17,
    char **VAR_18, int VAR_19, char *VAR_20)
{
  RNDXR VAR_21[1];
  unsigned int VAR_22;
  int VAR_23 = 1;
  FDR *VAR_24;
  char *VAR_25;
  SYMR VAR_26;
  int VAR_27;
  struct mdebug_pending *VAR_28;

  *VAR_16 = (struct type *) ((void*)0);

  (*VAR_4->swap_rndx_in) (VAR_19, &VAR_15->a_rndx, VAR_21);


  if (VAR_21->rfd == 0xfff)
    {
      VAR_23++;
      VAR_22 = FUNC_0 (VAR_19, VAR_15 + 1);
    }
  else
    {
      VAR_22 = VAR_21->rfd;
    }




  if (VAR_22 == -1)
    {
      *VAR_18 = "<undefined>";
      *VAR_16 = FUNC_6 (VAR_17, 0, VAR_0, (char *) ((void*)0), VAR_2);
      return VAR_23;
    }




  if (VAR_21->rfd == 0xfff && VAR_21->index == 0)
    {
      *VAR_18 = "<undefined>";
      return VAR_23;
    }


  VAR_24 = FUNC_5 (VAR_14, VAR_22);
  VAR_27 = VAR_24 - VAR_3->fdr;

  if (VAR_21->index >= VAR_24->csym)
    {

      *VAR_18 = "<illegal>";
      FUNC_3 (VAR_20, VAR_27, VAR_21->index);
      return VAR_23;
    }







  VAR_25 = ((char *) VAR_3->external_sym
  + ((VAR_24->isymBase + VAR_21->index)
     * VAR_4->external_sym_size));
  (*VAR_4->swap_sym_in) (VAR_1, VAR_25, &VAR_26);


  if ((VAR_26.sc != VAR_5
       || (VAR_26.st != VAR_6 && VAR_26.st != VAR_10 && VAR_26.st != VAR_8
    && VAR_26.st != VAR_9 && VAR_26.st != VAR_11
    && VAR_26.st != VAR_7))
      && (VAR_26.st != VAR_6 || !FUNC_1 (VAR_26.sc)))
    {

      *VAR_18 = "<illegal>";
      FUNC_3 (VAR_20, VAR_27, VAR_21->index);
      return VAR_23;
    }

  *VAR_18 = VAR_3->ss + VAR_24->issBase + VAR_26.iss;

  VAR_28 = FUNC_7 (VAR_24, VAR_25);
  if (VAR_28)
    *VAR_16 = VAR_28->t;
  else
    {


      if ((VAR_26.iss == 0 && VAR_26.st == VAR_10) || VAR_26.st == VAR_8)
 {
   TIR VAR_29;
   (*VAR_4->swap_tir_in) (VAR_19,
          &(VAR_3->external_aux
     + VAR_24->iauxBase + VAR_26.index)->a_ti,
          &VAR_29);
   if (VAR_29.tq0 != VAR_13)
     FUNC_4 (&VAR_12,
         "illegal tq0 in forward typedef for %s", VAR_20);
   switch (VAR_29.bt)
     {
     case 128:
       *VAR_16 = FUNC_6 (VAR_17, 0, 0, (char *) ((void*)0),
    VAR_2);
       *VAR_18 = "<undefined>";
       break;

     case 131:
     case 129:
     case 132:
       FUNC_12 (VAR_27,
    (VAR_3->external_aux
     + VAR_24->iauxBase + VAR_26.index + 1),
    VAR_16, VAR_17, VAR_18,
    VAR_24->fBigendian, VAR_20);
       break;

     case 130:







       *VAR_16 = FUNC_8 (VAR_27,
     VAR_3->external_aux + VAR_24->iauxBase,
     VAR_26.index,
     (int *) ((void*)0),
     VAR_24->fBigendian,
     VAR_3->ss + VAR_24->issBase + VAR_26.iss);
       FUNC_2 (VAR_24, VAR_25, *VAR_16);
       break;

     default:
       FUNC_4 (&VAR_12,
    "illegal bt %d in forward typedef for %s", VAR_29.bt,
    VAR_20);
       *VAR_16 = FUNC_6 (VAR_17, 0, 0, (char *) ((void*)0),
    VAR_2);
       break;
     }
   return VAR_23;
 }
      else if (VAR_26.st == VAR_10)
 {







   *VAR_16 = FUNC_8 (VAR_27,
        VAR_3->external_aux + VAR_24->iauxBase,
        VAR_26.index,
        (int *) ((void*)0),
        VAR_24->fBigendian,
        VAR_3->ss + VAR_24->issBase + VAR_26.iss);
 }
      else
 {





   *VAR_16 = FUNC_6 (VAR_17, 0, 0, (char *) ((void*)0), VAR_2);
 }
      FUNC_2 (VAR_24, VAR_25, *VAR_16);
    }


  return VAR_23;
}
