
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ibuf {scalar_t__ off; scalar_t__ buf; scalar_t__ buflen; } ;


 size_t FUNC_0 (size_t,scalar_t__) ;
 int FUNC_1 (char*,scalar_t__,size_t) ;

__attribute__((used)) static int
FUNC_2(void *VAR_0, char *VAR_1, int VAR_2)
{
 struct ibuf *VAR_3 = VAR_0;
 size_t VAR_4 = FUNC_0((size_t)VAR_2, VAR_3->buflen - VAR_3->off);

 FUNC_1(VAR_1, VAR_3->buf + VAR_3->off, VAR_4);
 VAR_3->off += VAR_4;
 return VAR_4;
}
