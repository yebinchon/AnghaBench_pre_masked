
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dmabuf {char* nextOut; char* nextIn; char* rawbuf; int dmasize; } ;


 int FUNC_0 (struct dmabuf*,char*,char*,int) ;
 int FUNC_1 (struct dmabuf*,char*,char*,int) ;

__attribute__((used)) static int
FUNC_2(struct dmabuf *VAR_0, char* VAR_1, int VAR_2, int VAR_3)
{
 char *VAR_4 = VAR_3 ? VAR_0->nextOut : VAR_0->nextIn;
 char *VAR_5 = VAR_0->rawbuf + VAR_0->dmasize;
 int VAR_6, VAR_7;

 if (VAR_4 + VAR_2 > VAR_5) {
  int VAR_8 = (int) (VAR_5 - VAR_4);
  if (VAR_3) {
   if ((VAR_6 = FUNC_1(VAR_0, VAR_1,
           VAR_4, VAR_8)) < 0)
    return VAR_6;
   VAR_7 = VAR_6;
   if ((VAR_6 = FUNC_1(VAR_0, VAR_1 + VAR_8,
           VAR_0->rawbuf,
           VAR_2 - VAR_8)) < 0)
    return VAR_6;
   VAR_7 += VAR_6;
  } else {
   if ((VAR_6 = FUNC_0(VAR_0, VAR_4, VAR_1,
             VAR_8)) < 0)
    return VAR_6;
   VAR_7 = VAR_6;
   if ((VAR_6 = FUNC_0(VAR_0, VAR_0->rawbuf,
             VAR_1 + VAR_8,
             VAR_2 - VAR_8)) < 0)
    return VAR_6;
   VAR_7 += VAR_6;
  }
 } else {
  if (VAR_3)
   VAR_7 = FUNC_1(VAR_0, VAR_1, VAR_4, VAR_2);
  else
   VAR_7 = FUNC_0(VAR_0, VAR_4, VAR_1, VAR_2);
 }

 return VAR_7;
}
