
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char u_int8_t ;
struct universe {int * hash; } ;
struct option_data {char* data; unsigned int len; } ;
struct option {char* format; size_t code; } ;
struct iaddr {unsigned int len; char* iabuf; } ;
typedef int hunkbuf ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,char*,int ,int) ;
 struct universe VAR_5 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int *,unsigned char*,int ) ;
 int FUNC_4 (int) ;
 char* FUNC_5 (unsigned int) ;
 int FUNC_6 (char*,char*,unsigned int) ;
 int FUNC_7 (char**,int *) ;
 unsigned int FUNC_8 (int *,char*,int) ;
 int FUNC_9 (int *,struct iaddr*) ;
 int FUNC_10 (char*,...) ;
 int FUNC_11 (char**,int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (char*,char*) ;
 char* FUNC_14 (char*) ;
 unsigned int FUNC_15 (char*) ;
 int VAR_6 ;
 int FUNC_16 (char*,char const) ;

struct option *
FUNC_17(FILE *VAR_7, struct option_data *VAR_8)
{
 char *VAR_9;
 int VAR_10;
 u_int8_t VAR_11[4];
 u_int8_t VAR_12[1024];
 unsigned VAR_13 = 0;
 char *VAR_14;
 const char *VAR_15;
 struct universe *VAR_16;
 struct option *VAR_17;
 struct iaddr VAR_18;
 u_int8_t *VAR_19;
 unsigned VAR_20;
 int VAR_21 = 0;

 VAR_10 = FUNC_7(&VAR_9, VAR_7);
 if (!FUNC_4(VAR_10)) {
  FUNC_10("expecting identifier after option keyword.");
  if (VAR_10 != VAR_3)
   FUNC_12(VAR_7);
  return (((void*)0));
 }
 if ((VAR_14 = FUNC_14(VAR_9)) == ((void*)0))
  FUNC_1("no memory for vendor information.");

 VAR_10 = FUNC_11(&VAR_9, VAR_7);
 if (VAR_10 == VAR_1) {

  VAR_10 = FUNC_7(&VAR_9, VAR_7);


  VAR_10 = FUNC_7(&VAR_9, VAR_7);
  if (!FUNC_4(VAR_10)) {
   FUNC_10("expecting identifier after '.'");
   if (VAR_10 != VAR_3)
    FUNC_12(VAR_7);
   FUNC_2(VAR_14);
   return (((void*)0));
  }



  VAR_16 = ((struct universe *)FUNC_3(&VAR_6,
      (unsigned char *)VAR_14, 0));


  if (!VAR_16) {
   FUNC_10("no vendor named %s.", VAR_14);
   FUNC_12(VAR_7);
   FUNC_2(VAR_14);
   return (((void*)0));
  }
 } else {


  VAR_9 = VAR_14;
  VAR_16 = &VAR_5;
 }


 VAR_17 = (struct option *)FUNC_3(VAR_16->hash,
     (unsigned char *)VAR_9, 0);


 if (!VAR_17) {
  if (VAR_9 == VAR_14)
   FUNC_10("no option named %s", VAR_9);
  else
   FUNC_10("no option named %s for vendor %s",
        VAR_9, VAR_14);
  FUNC_12(VAR_7);
  FUNC_2(VAR_14);
  return (((void*)0));
 }


 FUNC_2(VAR_14);


 do {
  for (VAR_15 = VAR_17->format; *VAR_15; VAR_15++) {
   if (*VAR_15 == 'A')
    break;
   switch (*VAR_15) {
   case 'X':
    VAR_20 = FUNC_8(VAR_7, &VAR_12[VAR_13],
        sizeof(VAR_12) - VAR_13);
    VAR_13 += VAR_20;
    break;
   case 't':
    VAR_10 = FUNC_7(&VAR_9, VAR_7);
    if (VAR_10 != VAR_4) {
     FUNC_10("expecting string.");
     FUNC_12(VAR_7);
     return (((void*)0));
    }
    VAR_20 = FUNC_15(VAR_9);
    if (VAR_13 + VAR_20 + 1 > sizeof(VAR_12)) {
     FUNC_10("option data buffer %s",
         "overflow");
     FUNC_12(VAR_7);
     return (((void*)0));
    }
    FUNC_6(&VAR_12[VAR_13], VAR_9, VAR_20 + 1);
    VAR_21 = 1;
    VAR_13 += VAR_20;
    break;
   case 'I':
    if (!FUNC_9(VAR_7, &VAR_18))
     return (((void*)0));
    VAR_20 = VAR_18.len;
    VAR_19 = VAR_18.iabuf;
alloc:
    if (VAR_13 + VAR_20 > sizeof(VAR_12)) {
     FUNC_10("option data buffer "
         "overflow");
     FUNC_12(VAR_7);
     return (((void*)0));
    }
    FUNC_6(&VAR_12[VAR_13], VAR_19, VAR_20);
    VAR_13 += VAR_20;
    break;
   case 'L':
   case 'l':
    VAR_10 = FUNC_7(&VAR_9, VAR_7);
    if (VAR_10 != VAR_2) {
need_number:
     FUNC_10("expecting number.");
     if (VAR_10 != VAR_3)
      FUNC_12(VAR_7);
     return (((void*)0));
    }
    FUNC_0(VAR_11, VAR_9, 0, 32);
    VAR_20 = 4;
    VAR_19 = VAR_11;
    goto alloc;
   case 's':
   case 'S':
    VAR_10 = FUNC_7(&VAR_9, VAR_7);
    if (VAR_10 != VAR_2)
     goto need_number;
    FUNC_0(VAR_11, VAR_9, 0, 16);
    VAR_20 = 2;
    VAR_19 = VAR_11;
    goto alloc;
   case 'b':
   case 'B':
    VAR_10 = FUNC_7(&VAR_9, VAR_7);
    if (VAR_10 != VAR_2)
     goto need_number;
    FUNC_0(VAR_11, VAR_9, 0, 8);
    VAR_20 = 1;
    VAR_19 = VAR_11;
    goto alloc;
   case 'f':
    VAR_10 = FUNC_7(&VAR_9, VAR_7);
    if (!FUNC_4(VAR_10)) {
     FUNC_10("expecting identifier.");
bad_flag:
     if (VAR_10 != VAR_3)
      FUNC_12(VAR_7);
     return (((void*)0));
    }
    if (!FUNC_13(VAR_9, "true") ||
        !FUNC_13(VAR_9, "on"))
     VAR_11[0] = 1;
    else if (!FUNC_13(VAR_9, "false") ||
        !FUNC_13(VAR_9, "off"))
     VAR_11[0] = 0;
    else {
     FUNC_10("expecting boolean.");
     goto bad_flag;
    }
    VAR_20 = 1;
    VAR_19 = VAR_11;
    goto alloc;
   default:
    FUNC_16("Bad format %c in parse_option_param.",
        *VAR_15);
    FUNC_12(VAR_7);
    return (((void*)0));
   }
  }
  VAR_10 = FUNC_7(&VAR_9, VAR_7);
 } while (*VAR_15 == 'A' && VAR_10 == VAR_0);

 if (VAR_10 != VAR_3) {
  FUNC_10("semicolon expected.");
  FUNC_12(VAR_7);
  return (((void*)0));
 }

 VAR_8[VAR_17->code].data = FUNC_5(VAR_13 + VAR_21);
 if (!VAR_8[VAR_17->code].data)
  FUNC_1("out of memory allocating option data.");
 FUNC_6(VAR_8[VAR_17->code].data, VAR_12, VAR_13 + VAR_21);
 VAR_8[VAR_17->code].len = VAR_13;
 return (VAR_17);
}
