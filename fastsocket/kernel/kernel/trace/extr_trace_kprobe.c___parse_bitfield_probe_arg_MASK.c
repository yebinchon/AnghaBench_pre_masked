
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fetch_type {int size; int * fetch; } ;
struct fetch_param {void* data; int fn; } ;
struct bitfield_fetch_param {unsigned long hi_shift; unsigned long low_shift; struct fetch_param orig; } ;


 unsigned long FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 struct bitfield_fetch_param* FUNC_1 (int,int ) ;
 unsigned long FUNC_2 (char const*,char**,int ) ;

__attribute__((used)) static int FUNC_3(const char *VAR_4,
          const struct fetch_type *VAR_5,
          struct fetch_param *VAR_6)
{
 struct bitfield_fetch_param *VAR_7;
 unsigned long VAR_8, VAR_9;
 char *VAR_10;

 if (*VAR_4 != 'b')
  return 0;

 VAR_7 = FUNC_1(sizeof(*VAR_7), VAR_3);
 if (!VAR_7)
  return -VAR_1;
 VAR_7->orig = *VAR_6;
 VAR_6->fn = VAR_5->fetch[VAR_2];
 VAR_6->data = (void *)VAR_7;

 VAR_8 = FUNC_2(VAR_4 + 1, &VAR_10, 0);
 if (VAR_8 == 0 || *VAR_10 != '@')
  return -VAR_0;

 VAR_4 = VAR_10 + 1;
 VAR_9 = FUNC_2(VAR_4, &VAR_10, 0);
 if (VAR_10 == VAR_4 || *VAR_10 != '/')
  return -VAR_0;

 VAR_7->hi_shift = FUNC_0(VAR_5->size) - (VAR_8 + VAR_9);
 VAR_7->low_shift = VAR_7->hi_shift + VAR_9;
 return (FUNC_0(VAR_5->size) < (VAR_8 + VAR_9)) ? -VAR_0 : 0;
}
