
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_4__ {char* nvp_name; int nvp_type; size_t nvp_datasize; size_t nvp_nitems; int nvp_magic; int nvp_data; } ;
typedef TYPE_1__ nvpair_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,char const*,size_t) ;
 TYPE_1__* FUNC_3 (int,int) ;
 size_t FUNC_4 (char const*) ;

__attribute__((used)) static nvpair_t *
FUNC_5(const char *VAR_5, int VAR_6, uint64_t VAR_7, size_t VAR_8,
    size_t VAR_9)
{
 nvpair_t *VAR_10;
 size_t VAR_11;

 FUNC_1(VAR_6 >= VAR_3 && VAR_6 <= VAR_4);

 VAR_11 = FUNC_4(VAR_5);
 if (VAR_11 >= VAR_2) {
  FUNC_0(VAR_0);
  return (((void*)0));
 }

 VAR_10 = FUNC_3(1, sizeof(*VAR_10) + VAR_11 + 1);
 if (VAR_10 != ((void*)0)) {
  VAR_10->nvp_name = (char *)(VAR_10 + 1);
  FUNC_2(VAR_10->nvp_name, VAR_5, VAR_11);
  VAR_10->nvp_name[VAR_11] = '\0';
  VAR_10->nvp_type = VAR_6;
  VAR_10->nvp_data = VAR_7;
  VAR_10->nvp_datasize = VAR_8;
  VAR_10->nvp_nitems = VAR_9;
  VAR_10->nvp_magic = VAR_1;
 }

 return (VAR_10);
}
