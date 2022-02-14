
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct codestring {int code; char* string1; char* string0; } ;


 size_t VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 struct codestring const* VAR_2 ;
 struct codestring const* VAR_3 ;
 int FUNC_1 (char*,size_t,char*,char const*,...) ;

__attribute__((used)) static const char *
FUNC_2(
 int VAR_4,
 const char * VAR_5,
 const struct codestring * VAR_6,
 size_t VAR_7
 )
{
 const char * VAR_8;
 char * VAR_9;
 char * VAR_10;
 char * VAR_11;
 size_t VAR_12;
 int VAR_13;
 int VAR_14;

 VAR_14 = VAR_1;
 FUNC_0(VAR_9);
 VAR_10 = VAR_9;
 VAR_11 = VAR_9 + VAR_0;
 VAR_8 = "";

 for (VAR_12 = 0; VAR_12 < VAR_7; VAR_12++) {
  const char * VAR_15;

  if (VAR_6[VAR_12].code & VAR_4) {
   VAR_15 = VAR_6[VAR_12].string1;
  } else {
   VAR_15 = VAR_6[VAR_12].string0;
  }

  if (VAR_15) {
   size_t VAR_16 = VAR_11 - VAR_10;
   VAR_13 = FUNC_1(VAR_10, VAR_16, "%s%s", VAR_8,
          VAR_15);
   if ((size_t)VAR_13 >= VAR_16)
    goto toosmall;
   VAR_10 += VAR_13;
   VAR_8 = VAR_5;
  }
 }

 return VAR_9;

    toosmall:
 FUNC_1(VAR_9, VAR_0,
   "decode_bitflags(%s) can't decode 0x%x in %d bytes",
   (VAR_6 == VAR_3)
       ? "peer_st"
       :





        "",
   VAR_4, (int)VAR_0);
 VAR_1 = VAR_14;

 return VAR_9;
}
