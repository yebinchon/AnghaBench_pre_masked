
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pollfd {int events; int revents; void* fd; } ;
typedef int FILE ;


 int VAR_0 ;
 void* FUNC_0 (int *) ;
 int FUNC_1 (struct pollfd*,int,int) ;

__attribute__((used)) static int
FUNC_2(FILE *VAR_1, FILE *VAR_2, int VAR_3)
{
 int VAR_4, VAR_5;
 struct pollfd VAR_6[2];

 VAR_5 = 0;
 if (VAR_1) {
  VAR_6[VAR_5].fd = FUNC_0(VAR_1);
  VAR_6[VAR_5++].events = VAR_0;
 }

 if (VAR_2) {
  VAR_6[VAR_5].fd = FUNC_0(VAR_2);
  VAR_6[VAR_5++].events = VAR_0;
 }

 if ((VAR_4 = FUNC_1(VAR_6, VAR_5, VAR_3 * 1000)) <= 0)
  return VAR_4;

 VAR_4 = 0;
 VAR_5 = 0;
 if (VAR_1)
  VAR_4 |= (VAR_6[VAR_5++].revents & VAR_0) ? 1 : 0;
 if (VAR_2)
  VAR_4 |= (VAR_6[VAR_5++].revents & VAR_0) ? 2 : 0;
 return VAR_4;
}
