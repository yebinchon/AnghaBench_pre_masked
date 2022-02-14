
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct ar_hdr {char* ar_size; char* ar_name; } ;
typedef int off_t ;
struct TYPE_9__ {int e_next; int e_nchildren; } ;
struct TYPE_10__ {TYPE_2__ e_ar; } ;
struct TYPE_8__ {unsigned char* e_rawhdr; } ;
struct TYPE_11__ {scalar_t__ e_kind; int e_fd; struct TYPE_11__* e_parent; TYPE_3__ e_u; TYPE_1__ e_hdr; int e_cmd; scalar_t__ e_rawfile; } ;
typedef int Elf_Cmd ;
typedef TYPE_4__ Elf ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (char*) ;
 int VAR_2 ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (char*,int,int,size_t*) ;
 int FUNC_3 (int) ;
 TYPE_4__* FUNC_4 (char*,size_t) ;

Elf *
FUNC_5(int VAR_3, Elf_Cmd VAR_4, Elf *VAR_5)
{
 Elf *VAR_6;
 off_t VAR_7;
 size_t VAR_8, VAR_9;
 struct ar_hdr *VAR_10;
 char *VAR_11, *VAR_12;

 FUNC_3(VAR_5->e_kind == VAR_1);

 VAR_7 = VAR_5->e_u.e_ar.e_next;





 if (VAR_7 == (off_t) 0)
  return (((void*)0));

 FUNC_3((VAR_7 & 1) == 0);

 VAR_10 = (struct ar_hdr *) (VAR_5->e_rawfile + VAR_7);




 if (FUNC_2(VAR_10->ar_size, sizeof(VAR_10->ar_size), 10,
     &VAR_9) == 0) {
  FUNC_1(VAR_0, 0);
  return (((void*)0));
 }





 if (FUNC_0(VAR_10->ar_name)) {
  VAR_12 = VAR_10->ar_name +
      VAR_2;
  if (FUNC_2(VAR_12, sizeof(VAR_10->ar_name) -
      VAR_2, 10, &VAR_8) == 0) {
   FUNC_1(VAR_0, 0);
   return (((void*)0));
  }

  VAR_11 = (char *) (VAR_10 + 1) + VAR_8;
  VAR_9 -= VAR_8;
 } else
  VAR_11 = (char *) (VAR_10 + 1);


 if ((VAR_6 = FUNC_4(VAR_11, VAR_9)) == ((void*)0))
  return (((void*)0));

 VAR_6->e_fd = VAR_3;
 VAR_6->e_cmd = VAR_4;
 VAR_6->e_hdr.e_rawhdr = (unsigned char *) VAR_10;

 VAR_5->e_u.e_ar.e_nchildren++;
 VAR_6->e_parent = VAR_5;

 return (VAR_6);
}
