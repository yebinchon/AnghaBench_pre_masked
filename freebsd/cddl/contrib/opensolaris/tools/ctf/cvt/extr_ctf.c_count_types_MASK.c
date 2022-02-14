
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ushort_t ;
struct TYPE_5__ {int ctt_info; } ;
typedef TYPE_1__ ctf_type_t ;
typedef int ctf_member_t ;
typedef int ctf_lmember_t ;
struct TYPE_6__ {scalar_t__ cth_typeoff; scalar_t__ cth_stroff; } ;
typedef TYPE_2__ ctf_header_t ;
typedef int ctf_enum_t ;
typedef int ctf_array_t ;
typedef scalar_t__ caddr_t ;


 int FUNC_0 (int ) ;
 size_t FUNC_1 (int ) ;
 size_t VAR_0 ;
 int FUNC_2 (int,char*,int) ;
 int FUNC_3 (TYPE_1__*,size_t*,size_t*) ;
 int FUNC_4 (char*,int,int,scalar_t__) ;

__attribute__((used)) static int
FUNC_5(ctf_header_t *VAR_1, caddr_t VAR_2)
{
 caddr_t VAR_3 = VAR_2 + VAR_1->cth_typeoff;
 int VAR_4 = 0;

 VAR_3 = VAR_2 + VAR_1->cth_typeoff;
 while (VAR_3 < VAR_2 + VAR_1->cth_stroff) {
  void *VAR_5 = (void *) VAR_3;
  ctf_type_t *VAR_6 = VAR_5;
  size_t VAR_7 = FUNC_1(VAR_6->ctt_info);
  size_t VAR_8, VAR_9;

  FUNC_3(VAR_6, &VAR_8, &VAR_9);

  switch (FUNC_0(VAR_6->ctt_info)) {
  case 135:
  case 138:
   VAR_3 += 4;
   break;
  case 134:
  case 137:
  case 131:
  case 128:
  case 140:
  case 133:
  case 136:
   VAR_3 += sizeof (ushort_t) * (VAR_7 + (VAR_7 & 1));
   break;
  case 141:
   VAR_3 += sizeof (ctf_array_t);
   break;
  case 132:
  case 130:
   if (VAR_8 < VAR_0)
    VAR_3 += sizeof (ctf_member_t) * VAR_7;
   else
    VAR_3 += sizeof (ctf_lmember_t) * VAR_7;
   break;
  case 139:
   VAR_3 += sizeof (ctf_enum_t) * VAR_7;
   break;
  case 129:
   break;
  default:
   FUNC_4("Unknown CTF type %d (#%d) at %#x",
       FUNC_0(VAR_6->ctt_info), VAR_4, VAR_3 - VAR_2);
  }

  VAR_3 += VAR_9;
  VAR_4++;
 }

 FUNC_2(3, "CTF read %d types\n", VAR_4);

 return (VAR_4);
}
