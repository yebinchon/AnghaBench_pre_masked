
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int* recommendsize; TYPE_2__** recommend; } ;
typedef TYPE_1__ _ISO2022EncodingInfo ;
struct TYPE_9__ {unsigned char final; char interm; char vers; int type; } ;
typedef TYPE_2__ _ISO2022Charset ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (char const*,TYPE_2__*) ;
 TYPE_2__* FUNC_1 (int) ;
 TYPE_2__* FUNC_2 (TYPE_2__*,int,int) ;
 int FUNC_3 (char*,char const) ;
 int FUNC_4 (char const*,char*) ;

__attribute__((used)) static __inline int
FUNC_5(_ISO2022EncodingInfo * __restrict VAR_7,
    const char * __restrict VAR_8)
{
 _ISO2022Charset VAR_9, *VAR_10;
 int VAR_11;

 if (!FUNC_3("0123", VAR_8[0]) || VAR_8[1] != '=')
  return (VAR_5);

 if (FUNC_0(&VAR_8[2], &VAR_9) == 0)
  ;
 else if (!FUNC_4(&VAR_8[2], "94")) {
  VAR_9.final = (unsigned char)(VAR_8[4]);
  VAR_9.interm = '\0';
  VAR_9.vers = '\0';
  VAR_9.type = VAR_0;
 } else if (!FUNC_4(&VAR_8[2], "96")) {
  VAR_9.final = (unsigned char)(VAR_8[4]);
  VAR_9.interm = '\0';
  VAR_9.vers = '\0';
  VAR_9.type = VAR_2;
 } else if (!FUNC_4(&VAR_8[2], "94$")) {
  VAR_9.final = (unsigned char)(VAR_8[5]);
  VAR_9.interm = '\0';
  VAR_9.vers = '\0';
  VAR_9.type = VAR_1;
 } else if (!FUNC_4(&VAR_8[2], "96$")) {
  VAR_9.final = (unsigned char)(VAR_8[5]);
  VAR_9.interm = '\0';
  VAR_9.vers = '\0';
  VAR_9.type = VAR_3;
 } else
  return (VAR_6);

 VAR_11 = VAR_8[0] - '0';
 if (!VAR_7->recommend[VAR_11])
  VAR_7->recommend[VAR_11] = FUNC_1(sizeof(_ISO2022Charset));
 else {
  VAR_10 = FUNC_2(VAR_7->recommend[VAR_11], VAR_7->recommendsize[VAR_11] + 1,
      sizeof(_ISO2022Charset));
  if (!VAR_10)
   return (VAR_6);
  VAR_7->recommend[VAR_11] = VAR_10;
 }
 if (!VAR_7->recommend[VAR_11])
  return (VAR_6);
 VAR_7->recommendsize[VAR_11]++;

 (VAR_7->recommend[VAR_11] + (VAR_7->recommendsize[VAR_11] - 1))->final = VAR_9.final;
 (VAR_7->recommend[VAR_11] + (VAR_7->recommendsize[VAR_11] - 1))->interm = VAR_9.interm;
 (VAR_7->recommend[VAR_11] + (VAR_7->recommendsize[VAR_11] - 1))->vers = VAR_9.vers;
 (VAR_7->recommend[VAR_11] + (VAR_7->recommendsize[VAR_11] - 1))->type = VAR_9.type;

 return (VAR_4);
}
