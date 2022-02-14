
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_2__ {int arglen; } ;
struct ng_mesg {TYPE_1__ header; scalar_t__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int,struct ng_mesg*,int,char*) ;
 scalar_t__ FUNC_1 (int,char*,int ,int ,struct ng_mesg*,int) ;
 int VAR_3 ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int) ;
 int FUNC_4 (struct ng_mesg*,struct ng_mesg*,int) ;
 int FUNC_5 (scalar_t__,scalar_t__,int) ;

int
FUNC_6(int VAR_4, struct ng_mesg *VAR_5, size_t VAR_6, char *VAR_7)
{
 struct ng_mesg *VAR_8, *VAR_9;
 int VAR_10, VAR_11;
 u_char *VAR_12;


 VAR_10 = 2 * sizeof(*VAR_5) + VAR_6;
 if ((VAR_12 = FUNC_3(VAR_10)) == ((void*)0))
  return (-1);
 VAR_8 = (struct ng_mesg *)VAR_12;
 VAR_9 = (struct ng_mesg *)VAR_8->data;


 if (FUNC_0(VAR_4, VAR_8, VAR_10, VAR_7) < 0)
  goto fail;
 FUNC_4(VAR_5, VAR_8, sizeof(*VAR_8));


 if (FUNC_1(VAR_4, VAR_7, VAR_2,
     VAR_1, VAR_8, sizeof(*VAR_8) + VAR_8->header.arglen) < 0)
  goto fail;
 if (FUNC_0(VAR_4, VAR_8, VAR_10, ((void*)0)) < 0)
  goto fail;


 if (sizeof(*VAR_9) + VAR_9->header.arglen > VAR_6) {
  VAR_3 = VAR_0;
fail:
  VAR_11 = VAR_3;
  FUNC_2(VAR_12);
  VAR_3 = VAR_11;
  return (-1);
 }
 FUNC_5(VAR_5->data, VAR_9->data, VAR_9->header.arglen);


 FUNC_2(VAR_12);
 return (0);
}
