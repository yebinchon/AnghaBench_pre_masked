
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_char ;
typedef TYPE_1__* res_state ;
struct TYPE_6__ {int opcode; int rd; void* ancount; void* arcount; void* qdcount; int rcode; void* id; } ;
struct TYPE_5__ {int options; int id; } ;
typedef TYPE_2__ HEADER ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

 int VAR_3 ;

 int VAR_4 ;

 int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int const*) ;
 char** VAR_9 ;
 int FUNC_1 (char const*,int *,int ,int **,int **) ;
 void* FUNC_2 (int) ;
 int FUNC_3 (int *,int const*,int) ;
 int FUNC_4 (int *,int ,int) ;
 int FUNC_5 (int **) ;
 int FUNC_6 (int,int *) ;
 int FUNC_7 (int ,int *) ;
 char* FUNC_8 (int) ;
 char* FUNC_9 (int) ;
 int FUNC_10 (char*,char*,char const*,char*,char*) ;
 int FUNC_11 (TYPE_1__*) ;

int
FUNC_12(res_state VAR_10,
      int VAR_11,
      const char *VAR_12,
      int VAR_13, int VAR_14,
      const u_char *VAR_15,
      int VAR_16,
      const u_char *VAR_17,
      u_char *VAR_18,
      int VAR_19)
{
 HEADER *VAR_20;
 u_char *VAR_21, *VAR_22;
 int VAR_23;
 u_char *VAR_24[20], **VAR_25, **VAR_26;

 FUNC_0(VAR_17);
 if ((VAR_18 == ((void*)0)) || (VAR_19 < VAR_0))
  return (-1);
 FUNC_4(VAR_18, 0, VAR_0);
 VAR_20 = (HEADER *) VAR_18;
 VAR_10->id = FUNC_11(VAR_10);
 VAR_20->id = FUNC_2(VAR_10->id);
 VAR_20->opcode = VAR_11;
 VAR_20->rd = (VAR_10->options & VAR_6) != 0U;
 VAR_20->rcode = VAR_3;
 VAR_21 = VAR_18 + VAR_0;
 VAR_22 = VAR_18 + VAR_19;
 VAR_25 = VAR_24;
 *VAR_25++ = VAR_18;
 *VAR_25++ = ((void*)0);
 VAR_26 = VAR_24 + FUNC_5(VAR_24);



 switch (VAR_11) {
 case 128:
 case 129:
  if (VAR_22 - VAR_21 < VAR_4)
   return (-1);
  if ((VAR_23 = FUNC_1(VAR_12, VAR_21, VAR_22 - VAR_21 - VAR_4, VAR_24,
      VAR_26)) < 0)
   return (-1);
  VAR_21 += VAR_23;
  FUNC_6(VAR_14, VAR_21);
  VAR_21 += VAR_1;
  FUNC_6(VAR_13, VAR_21);
  VAR_21 += VAR_1;
  VAR_20->qdcount = FUNC_2(1);
  if (VAR_11 == 128 || VAR_15 == ((void*)0))
   break;



  if ((VAR_22 - VAR_21) < VAR_7)
   return (-1);
  VAR_23 = FUNC_1((const char *)VAR_15, VAR_21, VAR_22 - VAR_21 - VAR_7,
       VAR_24, VAR_26);
  if (VAR_23 < 0)
   return (-1);
  VAR_21 += VAR_23;
  FUNC_6(VAR_8, VAR_21);
  VAR_21 += VAR_1;
  FUNC_6(VAR_13, VAR_21);
  VAR_21 += VAR_1;
  FUNC_7(0, VAR_21);
  VAR_21 += VAR_2;
  FUNC_6(0, VAR_21);
  VAR_21 += VAR_1;
  VAR_20->arcount = FUNC_2(1);
  break;

 case 130:



  if (VAR_22 - VAR_21 < 1 + VAR_7 + VAR_16)
   return (-1);
  *VAR_21++ = '\0';
  FUNC_6(VAR_14, VAR_21);
  VAR_21 += VAR_1;
  FUNC_6(VAR_13, VAR_21);
  VAR_21 += VAR_1;
  FUNC_7(0, VAR_21);
  VAR_21 += VAR_2;
  FUNC_6(VAR_16, VAR_21);
  VAR_21 += VAR_1;
  if (VAR_16) {
   FUNC_3(VAR_21, VAR_15, VAR_16);
   VAR_21 += VAR_16;
  }
  VAR_20->ancount = FUNC_2(1);
  break;

 default:
  return (-1);
 }
 return (VAR_21 - VAR_18);
}
