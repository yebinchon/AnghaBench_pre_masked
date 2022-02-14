
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct event_format {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (char**,char*,int ,char const*,char const*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (struct event_format**,void*,size_t,char const*) ;
 int FUNC_5 (int,void*,scalar_t__) ;
 void* FUNC_6 (void*,size_t) ;
 int VAR_2 ;

struct event_format *FUNC_7(const char *VAR_3, const char *VAR_4)
{
 int VAR_5, VAR_6;
 char *VAR_7;
 void *VAR_8 = ((void*)0), *VAR_9;
 size_t VAR_10 = 0, VAR_11 = 0;
 struct event_format *VAR_12 = ((void*)0);

 if (FUNC_0(&VAR_7, "%d/%s/%s/format", VAR_2, VAR_3, VAR_4) < 0)
  goto out;

 VAR_5 = FUNC_3(VAR_7, VAR_1);
 if (VAR_5 < 0)
  goto out_free_filename;

 do {
  if (VAR_10 == VAR_11) {
   VAR_11 += VAR_0;
   VAR_9 = FUNC_6(VAR_8, VAR_11);
   if (VAR_9 == ((void*)0))
    goto out_free_bf;
   VAR_8 = VAR_9;
  }

  VAR_6 = FUNC_5(VAR_5, VAR_8 + VAR_10, VAR_0);
  if (VAR_6 < 0)
   goto out_free_bf;
  VAR_10 += VAR_6;
 } while (VAR_6 > 0);

 FUNC_4(&VAR_12, VAR_8, VAR_10, VAR_3);

out_free_bf:
 FUNC_2(VAR_8);
 FUNC_1(VAR_5);
out_free_filename:
 FUNC_2(VAR_7);
out:
 return VAR_12;
}
