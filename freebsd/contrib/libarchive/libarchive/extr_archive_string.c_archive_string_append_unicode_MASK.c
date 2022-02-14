
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct archive_string_conv {int flag; } ;
struct archive_string {size_t length; char* s; int buffer_length; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * FUNC_0 (struct archive_string*,size_t) ;
 int FUNC_1 (int *,char const*,size_t) ;
 size_t FUNC_2 (char*,size_t,int ) ;
 size_t FUNC_3 (char*,size_t,int ) ;
 size_t FUNC_4 (char*,size_t,int ) ;
 int FUNC_5 (int *,char const*,size_t) ;
 int FUNC_6 (int *,char const*,size_t) ;

__attribute__((used)) static int
FUNC_7(struct archive_string *VAR_5, const void *VAR_6,
    size_t VAR_7, struct archive_string_conv *VAR_8)
{
 const char *VAR_9;
 char *VAR_10, *VAR_11;
 uint32_t VAR_12;
 size_t VAR_13;
 int VAR_14, VAR_15 = 0, VAR_16, VAR_17;
 int (*VAR_18)(uint32_t *, const char *, size_t);
 size_t (*VAR_19)(char *, size_t, uint32_t);

 if (VAR_8->flag & VAR_2) {
  VAR_19 = FUNC_2;
  VAR_16 = 2;
 } else if (VAR_8->flag & VAR_3) {
  VAR_19 = FUNC_3;
  VAR_16 = 2;
 } else if (VAR_8->flag & VAR_4) {
  VAR_19 = FUNC_4;
  VAR_16 = 1;
 } else {




  if (VAR_8->flag & VAR_0) {
   VAR_19 = FUNC_2;
   VAR_16 = 2;
  } else if (VAR_8->flag & VAR_1) {
   VAR_19 = FUNC_3;
   VAR_16 = 2;
  } else {
   VAR_19 = FUNC_4;
   VAR_16 = 1;
  }
 }

 if (VAR_8->flag & VAR_0) {
  VAR_18 = FUNC_5;
  VAR_17 = 1;
 } else if (VAR_8->flag & VAR_1) {
  VAR_18 = FUNC_6;
  VAR_17 = 1;
 } else {
  VAR_18 = FUNC_1;
  VAR_17 = VAR_16;
 }

 if (FUNC_0(VAR_5, VAR_5->length + VAR_7 * VAR_17 + VAR_16) == ((void*)0))
  return (-1);

 VAR_9 = (const char *)VAR_6;
 VAR_10 = VAR_5->s + VAR_5->length;
 VAR_11 = VAR_5->s + VAR_5->buffer_length - VAR_16;
 while ((VAR_14 = VAR_18(&VAR_12, VAR_9, VAR_7)) != 0) {
  if (VAR_14 < 0) {

   VAR_14 *= -1;
   VAR_15 = -1;
  }
  VAR_9 += VAR_14;
  VAR_7 -= VAR_14;
  while ((VAR_13 = VAR_19(VAR_10, VAR_11 - VAR_10, VAR_12)) == 0) {


   VAR_5->length = VAR_10 - VAR_5->s;
   if (FUNC_0(VAR_5,
       VAR_5->buffer_length + VAR_7 * VAR_17 + VAR_16) == ((void*)0))
    return (-1);
   VAR_10 = VAR_5->s + VAR_5->length;
   VAR_11 = VAR_5->s + VAR_5->buffer_length - VAR_16;
  }
  VAR_10 += VAR_13;
 }
 VAR_5->length = VAR_10 - VAR_5->s;
 VAR_5->s[VAR_5->length] = '\0';
 if (VAR_16 == 2)
  VAR_5->s[VAR_5->length+1] = '\0';
 return (VAR_15);
}
