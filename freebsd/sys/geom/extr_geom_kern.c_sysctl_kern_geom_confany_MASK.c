
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysctl_req {size_t oldidx; int * oldptr; } ;
struct sbuf {int dummy; } ;
typedef int g_event_t ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct sysctl_req*,int ,size_t) ;
 int FUNC_1 (int *,struct sbuf*,int ,int *) ;
 int VAR_5 ;
 int FUNC_2 (struct sbuf*) ;
 int FUNC_3 (struct sbuf*) ;
 size_t FUNC_4 (struct sbuf*) ;
 struct sbuf* FUNC_5 (int *,int *,size_t,int) ;
 int FUNC_6 (struct sbuf*,int ,size_t*) ;

__attribute__((used)) static int
FUNC_7(struct sysctl_req *VAR_6, g_event_t *VAR_7, size_t *VAR_8)
{
 size_t VAR_9 = 0;
 int VAR_10 = 0;
 struct sbuf *VAR_11;

 if (VAR_6->oldptr == ((void*)0)) {
  VAR_11 = FUNC_5(((void*)0), ((void*)0), VAR_1, VAR_3 |
      VAR_4);
  FUNC_6(VAR_11, VAR_5, &VAR_9);
  FUNC_1(VAR_7, VAR_11, VAR_0, ((void*)0));
  VAR_6->oldidx = *VAR_8 = VAR_9;
 } else {
  VAR_11 = FUNC_5(((void*)0), ((void*)0), *VAR_8, VAR_2 |
      VAR_4);
  FUNC_1(VAR_7, VAR_11, VAR_0, ((void*)0));
  *VAR_8 = FUNC_4(VAR_11);
  VAR_10 = FUNC_0(VAR_6, FUNC_2(VAR_11), FUNC_4(VAR_11));
 }
 FUNC_3(VAR_11);
 return VAR_10;
}
