
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct read_memory_data {unsigned char const* start; unsigned char const* p; unsigned char const* end; size_t read_size; } ;
struct archive {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct archive*) ;
 int FUNC_1 (struct archive*,struct read_memory_data*) ;
 int FUNC_2 (struct archive*,int ) ;
 int FUNC_3 (struct archive*,int ) ;
 int FUNC_4 (struct archive*,int ) ;
 int FUNC_5 (struct archive*,int ) ;
 int FUNC_6 (struct archive*,int ) ;
 int FUNC_7 (struct archive*,int ,char*) ;
 scalar_t__ FUNC_8 (int,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

int
FUNC_9(struct archive *VAR_7, const void *VAR_8,
    size_t VAR_9, size_t VAR_10)
{
 struct read_memory_data *VAR_11;

 VAR_11 = (struct read_memory_data *)FUNC_8(1, sizeof(*VAR_11));
 if (VAR_11 == ((void*)0)) {
  FUNC_7(VAR_7, VAR_1, "No memory");
  return (VAR_0);
 }
 VAR_11->start = VAR_11->p = (const unsigned char *)VAR_8;
 VAR_11->end = VAR_11->start + VAR_9;
 VAR_11->read_size = VAR_10;
 FUNC_3(VAR_7, VAR_4);
 FUNC_4(VAR_7, VAR_2);
 FUNC_5(VAR_7, VAR_5);
 FUNC_6(VAR_7, VAR_6);
 FUNC_2(VAR_7, VAR_3);
 FUNC_1(VAR_7, VAR_11);
 return (FUNC_0(VAR_7));
}
