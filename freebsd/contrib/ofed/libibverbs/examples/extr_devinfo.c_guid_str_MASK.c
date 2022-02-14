
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int __be64 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,char*,unsigned int,unsigned int,unsigned int,unsigned int) ;

__attribute__((used)) static const char *FUNC_2(__be64 VAR_0, char *VAR_1)
{
 uint64_t VAR_2 = FUNC_0(VAR_0);
 FUNC_1(VAR_1, "%04x:%04x:%04x:%04x",
  (unsigned) (VAR_2 >> 48) & 0xffff,
  (unsigned) (VAR_2 >> 32) & 0xffff,
  (unsigned) (VAR_2 >> 16) & 0xffff,
  (unsigned) (VAR_2 >> 0) & 0xffff);
 return VAR_1;
}
