
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvhdr {char* nvh_name; int nvh_namesize; int nvh_type; } ;
struct nv {int nv_error; int nv_ebuf; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned char* FUNC_0 (struct nvhdr*) ;
 size_t FUNC_1 (struct nvhdr*) ;
 size_t FUNC_2 (struct nvhdr*) ;
 size_t FUNC_3 (struct nvhdr*) ;
 int FUNC_4 (struct nv*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int) ;
 unsigned char* FUNC_7 (int ,size_t*) ;
 int VAR_5 ;
 size_t FUNC_8 (char*) ;

int
FUNC_9(struct nv *VAR_6, size_t *VAR_7)
{
 struct nvhdr *VAR_8;
 unsigned char *VAR_9, *VAR_10;
 size_t VAR_11, VAR_12, VAR_13;
 int VAR_14;

 if (VAR_6 == ((void*)0)) {
  VAR_5 = VAR_1;
  return (-1);
 }

 FUNC_4(VAR_6);
 FUNC_6(VAR_6->nv_error == 0);



 VAR_14 = 0;
 VAR_10 = FUNC_7(VAR_6->nv_ebuf, &VAR_12);
 while (VAR_12 > 0) {



  if (VAR_10[0] == '\0')
   break;




  if (VAR_12 < sizeof(*VAR_8) + 2) {
   VAR_14 = VAR_0;
   break;
  }
  VAR_8 = (struct nvhdr *)VAR_10;
  if (VAR_12 < FUNC_2(VAR_8)) {
   VAR_14 = VAR_0;
   break;
  }
  if (VAR_8->nvh_name[VAR_8->nvh_namesize - 1] != '\0') {
   VAR_14 = VAR_0;
   break;
  }
  if (FUNC_8(VAR_8->nvh_name) !=
      (size_t)(VAR_8->nvh_namesize - 1)) {
   VAR_14 = VAR_0;
   break;
  }
  if ((VAR_8->nvh_type & VAR_4) < VAR_2 ||
      (VAR_8->nvh_type & VAR_4) > VAR_3) {
   VAR_14 = VAR_0;
   break;
  }
  VAR_11 = FUNC_1(VAR_8);
  if (VAR_11 == 0) {
   VAR_14 = VAR_0;
   break;
  }
  if (VAR_12 < FUNC_3(VAR_8)) {
   VAR_14 = VAR_0;
   break;
  }
  VAR_13 = 0;
  switch (VAR_8->nvh_type & VAR_4) {
  case 138:
  case 129:
   if (VAR_13 == 0)
    VAR_13 = 1;

  case 144:
  case 135:
   if (VAR_13 == 0)
    VAR_13 = 2;

  case 142:
  case 133:
   if (VAR_13 == 0)
    VAR_13 = 4;

  case 140:
  case 131:
   if (VAR_13 == 0)
    VAR_13 = 8;
   if (VAR_11 != VAR_13) {
    VAR_14 = VAR_0;
    break;
   }
   break;
  case 137:
  case 128:
   break;
  case 143:
  case 134:
   if (VAR_13 == 0)
    VAR_13 = 2;

  case 141:
  case 132:
   if (VAR_13 == 0)
    VAR_13 = 4;

  case 139:
  case 130:
   if (VAR_13 == 0)
    VAR_13 = 8;
   if ((VAR_11 % VAR_13) != 0) {
    VAR_14 = VAR_0;
    break;
   }
   break;
  case 136:
   VAR_9 = FUNC_0(VAR_8);
   if (VAR_9[VAR_11 - 1] != '\0') {
    VAR_14 = VAR_0;
    break;
   }
   if (FUNC_8((char *)VAR_9) != VAR_11 - 1) {
    VAR_14 = VAR_0;
    break;
   }
   break;
  default:
   FUNC_5("invalid condition");
  }
  if (VAR_14 != 0)
   break;
  VAR_10 += FUNC_3(VAR_8);
  VAR_12 -= FUNC_3(VAR_8);
 }
 if (VAR_14 != 0) {
  VAR_5 = VAR_14;
  if (VAR_6->nv_error == 0)
   VAR_6->nv_error = VAR_14;
  return (-1);
 }
 if (VAR_7 != ((void*)0))
  *VAR_7 = VAR_12;
 return (0);
}
