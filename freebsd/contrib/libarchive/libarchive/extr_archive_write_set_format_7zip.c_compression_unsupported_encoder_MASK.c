
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct la_zstream {int * real_stream; scalar_t__ valid; } ;
struct archive {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct archive*,int ,char*,char const*) ;

__attribute__((used)) static int
FUNC_1(struct archive *VAR_2,
    struct la_zstream *VAR_3, const char *VAR_4)
{

 FUNC_0(VAR_2, VAR_0,
     "%s compression not supported on this platform", VAR_4);
 VAR_3->valid = 0;
 VAR_3->real_stream = ((void*)0);
 return (VAR_1);
}
