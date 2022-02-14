
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zeros ;
typedef int uint64_t ;
typedef int u_char ;
struct bio {scalar_t__ bio_length; scalar_t__ bio_data; } ;
typedef scalar_t__ ssize_t ;


 scalar_t__ FUNC_0 (int *,int const*,int) ;

__attribute__((used)) static int
FUNC_1(struct bio *VAR_0)
{
 static const uint64_t VAR_1[] = {
     0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
 };
 u_char *VAR_2;
 ssize_t VAR_3;

 VAR_3 = VAR_0->bio_length;
 VAR_2 = (u_char *)VAR_0->bio_data;
 for (; VAR_3 > 0; VAR_3 -= sizeof(VAR_1), VAR_2 += sizeof(VAR_1)) {
  if (FUNC_0(VAR_2, VAR_1, sizeof(VAR_1)) != 0)
   return (0);
 }
 return (1);
}
