
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u_int32_t ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long FUNC_0 (char const*,char**,int ) ;
 int FUNC_1 (char*,int ,...) ;

__attribute__((used)) static u_int32_t
FUNC_2(const char *VAR_3)
{
 char *VAR_4;
 unsigned long VAR_5;

 VAR_5 = FUNC_0(VAR_3, &VAR_4, 0);
 if (VAR_3 == VAR_4 || *VAR_4 == '\0') {
  FUNC_1("ERROR line %d: unexpected size: \'%s\'",
      VAR_1, VAR_3);
  return VAR_0;
 }

 if (*VAR_4 == 'K')
  VAR_5 *= 1024UL / VAR_2;
 else if (*VAR_4 == 'M')
  VAR_5 *= 1024UL * 1024UL / VAR_2;
 else if (*VAR_4 == 'G')
  VAR_5 *= 1024UL * 1024UL * 1024UL / VAR_2;
 else {
  FUNC_1("ERROR line %d: unexpected modifier: %c "
      "(not K/M/G)", VAR_1, *VAR_4);
  return VAR_0;
 }

 return VAR_5;
}
