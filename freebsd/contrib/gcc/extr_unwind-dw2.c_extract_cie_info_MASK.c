
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct dwarf_cie {unsigned char* augmentation; int version; } ;
struct _Unwind_Context {int dummy; } ;
typedef int _Unwind_Word ;
typedef scalar_t__ _Unwind_Ptr ;
typedef scalar_t__ _Unwind_Personality_Fn ;
struct TYPE_3__ {int code_align; int retaddr_column; int saw_z; int signal_frame; scalar_t__ personality; int fde_encoding; int lsda_encoding; int data_align; int eh_ptr; } ;
typedef TYPE_1__ _Unwind_FrameState ;


 int VAR_0 ;
 unsigned char* FUNC_0 (struct _Unwind_Context*,unsigned char const,unsigned char const*,scalar_t__*) ;
 int FUNC_1 (unsigned char const*) ;
 unsigned char* FUNC_2 (unsigned char const*,int *) ;
 unsigned char* FUNC_3 (unsigned char const*,int*) ;
 int FUNC_4 (char const*) ;

__attribute__((used)) static const unsigned char *
FUNC_5 (const struct dwarf_cie *VAR_1, struct _Unwind_Context *VAR_2,
    _Unwind_FrameState *VAR_3)
{
  const unsigned char *VAR_4 = VAR_1->augmentation;
  const unsigned char *VAR_5 = VAR_4 + FUNC_4 ((const char *)VAR_4) + 1;
  const unsigned char *VAR_6 = ((void*)0);
  _Unwind_Word VAR_7;



  if (VAR_4[0] == 'e' && VAR_4[1] == 'h')
    {
      VAR_3->eh_ptr = FUNC_1 (VAR_5);
      VAR_5 += sizeof (void *);
      VAR_4 += 2;
    }



  VAR_5 = FUNC_3 (VAR_5, &VAR_3->code_align);
  VAR_5 = FUNC_2 (VAR_5, &VAR_3->data_align);
  if (VAR_1->version == 1)
    VAR_3->retaddr_column = *VAR_5++;
  else
    VAR_5 = FUNC_3 (VAR_5, &VAR_3->retaddr_column);
  VAR_3->lsda_encoding = VAR_0;




  if (*VAR_4 == 'z')
    {
      VAR_5 = FUNC_3 (VAR_5, &VAR_7);
      VAR_6 = VAR_5 + VAR_7;

      VAR_3->saw_z = 1;
      ++VAR_4;
    }


  while (*VAR_4 != '\0')
    {

      if (VAR_4[0] == 'L')
 {
   VAR_3->lsda_encoding = *VAR_5++;
   VAR_4 += 1;
 }


      else if (VAR_4[0] == 'R')
 {
   VAR_3->fde_encoding = *VAR_5++;
   VAR_4 += 1;
 }


      else if (VAR_4[0] == 'P')
 {
   _Unwind_Ptr VAR_8;

   VAR_5 = FUNC_0 (VAR_2, *VAR_5, VAR_5 + 1, &VAR_8);
   VAR_3->personality = (_Unwind_Personality_Fn) VAR_8;
   VAR_4 += 1;
 }


      else if (VAR_4[0] == 'S')
 {
   VAR_3->signal_frame = 1;
   VAR_4 += 1;
 }



      else
 return VAR_6;
    }

  return VAR_6 ? VAR_6 : VAR_5;
}
