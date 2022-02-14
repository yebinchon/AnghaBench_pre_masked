
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t ssize_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,void const*,size_t) ;

__attribute__((used)) static ssize_t FUNC_2(const void *VAR_3, size_t VAR_4)
{
 int VAR_5;

 if (VAR_0) {
  VAR_0 += VAR_4;
  return VAR_4;
 }

 VAR_5 = FUNC_1(VAR_1, VAR_3, VAR_4);
 if (VAR_5 < 0)
  FUNC_0("writing to '%s'", VAR_2);

 return VAR_5;
}
