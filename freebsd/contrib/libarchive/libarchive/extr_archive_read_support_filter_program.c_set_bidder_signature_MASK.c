
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct program_bidder {size_t signature_len; int signature; } ;
struct archive_read_filter_bidder {int free; int * options; int init; int bid; struct program_bidder* data; } ;


 int VAR_0 ;
 int FUNC_0 (size_t) ;
 int FUNC_1 (int ,void const*,size_t) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_2(struct archive_read_filter_bidder *VAR_4,
    struct program_bidder *VAR_5, const void *VAR_6, size_t VAR_7)
{

 if (VAR_6 != ((void*)0) && VAR_7 > 0) {
  VAR_5->signature_len = VAR_7;
  VAR_5->signature = FUNC_0(VAR_7);
  FUNC_1(VAR_5->signature, VAR_6, VAR_7);
 }




 VAR_4->data = VAR_5;
 VAR_4->bid = VAR_1;
 VAR_4->init = VAR_3;
 VAR_4->options = ((void*)0);
 VAR_4->free = VAR_2;
 return (VAR_0);
}
