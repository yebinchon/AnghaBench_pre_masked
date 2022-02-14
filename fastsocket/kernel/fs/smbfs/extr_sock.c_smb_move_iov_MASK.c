
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvec {unsigned int iov_len; unsigned char* iov_base; } ;



__attribute__((used)) static int
FUNC_0(struct kvec **VAR_0, size_t *VAR_1, struct kvec *VAR_2, unsigned VAR_3)
{
 struct kvec *VAR_4 = *VAR_0;
 int VAR_5;
 int VAR_6;




 while (VAR_4->iov_len <= VAR_3) {
  VAR_3 -= VAR_4->iov_len;
  VAR_4++;
  (*VAR_1)--;
 }




 VAR_2[0].iov_len = VAR_4->iov_len-VAR_3;
 VAR_2[0].iov_base =((unsigned char *)VAR_4->iov_base)+VAR_3;
 VAR_4++;

 VAR_6 = VAR_2[0].iov_len;




 for (VAR_5 = 1; VAR_5 < *VAR_1; VAR_5++) {
  VAR_2[VAR_5] = *VAR_4++;
  VAR_6 += VAR_2[VAR_5].iov_len;
 }

 *VAR_0 = VAR_2;
 return VAR_6;
}
