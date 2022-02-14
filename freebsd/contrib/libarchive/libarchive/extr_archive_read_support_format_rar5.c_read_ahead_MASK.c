
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct archive_read {int dummy; } ;
typedef int ssize_t ;


 int * FUNC_0 (struct archive_read*,size_t,int*) ;

__attribute__((used)) static int FUNC_1(struct archive_read* VAR_0, size_t VAR_1,
    const uint8_t** VAR_2)
{
 if(!VAR_2)
  return 0;

 ssize_t VAR_3 = -1;
 *VAR_2 = FUNC_0(VAR_0, VAR_1, &VAR_3);
 if(*VAR_2 == ((void*)0)) {
  return 0;
 }

 return 1;
}
