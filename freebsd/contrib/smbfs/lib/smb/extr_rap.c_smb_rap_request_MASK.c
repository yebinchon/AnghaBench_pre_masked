
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
typedef int u_int16_t ;
struct smb_rap {char* r_nparam; int r_rcvbuflen; int r_plen; char* r_rcvbuf; char* r_npbuf; int r_entries; char* r_sdata; void* r_result; scalar_t__ r_pbuf; } ;
struct smb_ctx {int dummy; } ;


 int VAR_0 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (char*,int ,char*) ;
 int FUNC_2 (char*,char**,int*) ;
 int FUNC_3 (struct smb_ctx*,int ,int ,char*,int,scalar_t__,int ,int *,int*,scalar_t__,int*,char*) ;

int
FUNC_4(struct smb_rap *VAR_1, struct smb_ctx *VAR_2)
{
 u_int16_t *VAR_3, VAR_4;
 u_int32_t *VAR_5;
 char *VAR_6, *VAR_7 = VAR_1->r_nparam;
 char VAR_8;
 int VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14;

 VAR_10 = VAR_1->r_rcvbuflen;
 VAR_11 = VAR_1->r_plen;
 VAR_9 = FUNC_3(VAR_2, 0, 0, "\\PIPE\\LANMAN",
     VAR_1->r_plen, VAR_1->r_pbuf,
     0, ((void*)0),
     &VAR_11, VAR_1->r_pbuf,
     &VAR_10, VAR_1->r_rcvbuf
 );
 if (VAR_9)
  return VAR_9;
 VAR_3 = (u_int16_t*)VAR_1->r_pbuf;
 VAR_1->r_result = FUNC_0(*VAR_3++);
 VAR_4 = FUNC_0(*VAR_3++);
 VAR_1->r_npbuf = (char*)VAR_3;
 VAR_1->r_entries = VAR_12 = 0;
 VAR_13 = 0;
 while (!VAR_13 && *VAR_7) {
  VAR_8 = *VAR_7;
  switch (VAR_8) {
      case 'e':
   VAR_1->r_entries = VAR_12 = FUNC_0(*(u_int16_t*)VAR_1->r_npbuf);
   VAR_1->r_npbuf += 2;
   VAR_7++;
   break;
      default:
   VAR_13 = 1;
  }





 }
 VAR_1->r_nparam = VAR_7;




 VAR_6 = VAR_1->r_rcvbuf;
 while (VAR_12--) {
  VAR_7 = VAR_1->r_sdata;
  while (*VAR_7) {
   VAR_8 = *VAR_7;
   VAR_9 = FUNC_2(VAR_7, &VAR_7, &VAR_14);
   if (VAR_9) {
    FUNC_1("reply data mismath %s", 0, VAR_7);
    return VAR_0;
   }
   switch (VAR_8) {
       case 'z':
    VAR_5 = (u_int32_t*)VAR_6;
    *VAR_5 = (*VAR_5 & 0xffff) - VAR_4;
    break;
   }
   VAR_6 += VAR_14;
  }
 }
 return VAR_9;
}
